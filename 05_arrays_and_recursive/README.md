# Arrays and recursive nodes

## Warning

Arrays and recursive nodes have been introduced in LUSTRE as a syntactic facility.
The compiler LUSTRE-V4 expands arrays into as many variable as they have elements, and unfolds recursive nodes into regular node instanciations.

As a consequence, the array dimensions must be known at compile-time, and so do the parameters controling the recursivity. A compile-time expression is either an explicit constant or an expression made of explicit constants and formal parameters whoser actual counterparts are always explicit constants.

## A binary adder

* Basic Language

* Using Arrays

The first equation defines the first components of S and C using the standard indexation notation.
(notice that arrays can only be indexed by compile-time expressions). The second equation is less
standard, and makes use of slicing and polymorphism:

**the notation “S[1..3]” refers to the “slice” of the array S, made of elements 1 to 3 of S, i.e.,
the array X of type bool^3 such that 
X[0] = S[1], X[1] = S[2], X[2] = S[3]**

**From its declaration, the node ADD1 takes three Booleans as input parameters, and returns 2
Booleans. Here, it is called with three Boolean arrays (of the same size) as input parameters,
and returns 2 Boolean arrays (of the same size as the input arrays), obtained by applying ADD1
componentwise to the input arrays. Such a polymorphic extension is available for any operator
of the language.**

So, the equation “(S[1..3],C[1..3]) = ADD1(A[1..3],B[1..3],C[0..2])” stands for
(S[1],C[1]) = ADD1(A[1],B[1],C[0]);
(S[2],C[2]) = ADD1(A[2],B[2],C[1]);
(S[3],C[3]) = ADD1(A[3],B[3],C[2]);

The expansion of this node is the first task of the compiler. It consists, more or less, in translating ADD4 into FIRST ADD4, by replacing any array element by a variable defined by its own equation. 

We can also define a general binary adder, taking the size of the arrays as a parameter

* A general binary adder


Such a node cannot be compiled alone. As a matter of fact, the compiler needs an actual value to be
given to the parameter n, in order to be able to expand the program. A main node must be written.

### Compile

$lustre ADD.lus MAIN_ADD

### simulate

$luciole ADD.lus MAIN_ADD

## The exclusive node

Let us show another example making use of arrays: we will need an extension of the “#”
(exclusion) operator to arrays, i.e., an operator taking a Boolean array X as input, and returning
“true” if and only if at most one of X’s element is true. We use two auxiliary Boolean arrays: An
array EX whose ith element is true if there is at most one true element in X[0..i], and an array OR
to compute the cumulative disjunction of X’s elements

EX[i+1] = EX[i] ∧ ¬(OR[i] ∧ X[i+1]) with EX[0] = true
OR[i+1] = OR[i] ∨ X[i+1] with OR[0] = X[0]

In this program we used two new operators on arrays:
• The constructor “[.]”: If X:τ ^m and Y:τ ^n are two arrays, “X|Y” is their concatenation, of
type τ ^(m+n).
• The concatenation “|”: If E0, E1, ..., En are n expressions of the same type τ , then
“[E0, E1, ...,En]” is the array of type τ ^(n+1) whose ith element is Ei (i = 0 . . . n).

### Compile

$lustre EXC.lus MAIN_EXC
$lux EXC.lus MAIN_EXC
$.\MAIN_EXC

## The delay node with arrays

As a last example with arrays, we will build a general “delay” operator, taking as (static) parameter
an integer d (d ≥ 0) and a Boolean stream X, and returning a “delayed” version of X, i.e., a Boolean
stream Y such that y n = x n−d , for any n > d. Let us assume y n = false, for n ≤ d (initialization).
We use an auxiliary array A of type bool^d, such that A[i] n =X n−i .

However, compiling such a program into an automaton is not a good idea (Try it): The call
“DELAY(10,A)” creates 10 Boolean memories (instances of a pre operator) wich will involve 2^10
states in the automaton. Instead, one can call the compiler with the option “-0”,

$ lustre F.lus MAIN_DELAY -0

which produces a single-loop code: The resulting automaton has only one state and one (complicated)
transition.

It's obvious in the C code program.

**REASON ???**

## The delay node with recursion

Another solution for the delay operator is to write a recursive node.

The recursivity is controlled by a static conditional operator “with...then...else...”, which
is executed at compile-time to unfold the recursivity: The call “REC DELAY(3,X)” will be expanded
into something like:
Y_3=false -> pre(Y_2);
Y_2=false -> pre(Y_1);
Y_1=false -> pre(Y_0);
Y_0=X;



## Two recursive networks

1. Compute the disjunction of all the elements of a Boolean array

2. a tree structure























