# A simple automata

## basic

The "pre" (for "previous") operator allows to refer at cycle n to the value of a stream at cycle n − 1: if A = (a 1 , a 2 , . . . , a n , . . .) is a stream, pre(A) is the stream (nil, a 1 , a 2 , . . . , a n−1 , . . .). Its first value is the undefined value nil, and for any n > 1, its nth value is the (n − 1)th value of A.


The "->" (followed by) operator allows to initialize streams. If A = (a 1 , a 2 , . . . , a n , . . .) and B = (b 1 , b 2 , . . . , b n , . . .) are two streams of the same type, then "A -> B" is the stream (a 1 , b 2 , . . . , b n , . . .), equal to A at the first instant, and then forever equal to B.In particular, this operator allows to mask the “nil” value introduced by the pre operator.

## compile the node

$lustre F.lus EDGE

## simulate a node by luciole

$luciole F.lus EDGE

## compile a node into a C program

%compiling
$lustre F.lus EDGE

%simulating
$lux EDGE.oc

The OC code is translated into an instrumented program EDGE.c

## minimize the automata

$ocmin EDGE.oc -v

The -v option sets the verbose mode, and we get:

Loading automaton ...
=> done : 3 states
Minimizing (algo no 1) ...
=> done : 3 => 2  (2 steps)
`
The minimal one was written in the file EDGE\_min.oc

* produce a minimal automaton directly
$lustre F.lus EDGE -demand -v

We get:

DONE =>     2 states     4 transitions

## Re-using nodes

$lustre F.lus FALLING_EDGE
$lux FALLING_EDGE.oc









