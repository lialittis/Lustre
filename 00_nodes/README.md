# A simple automata

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









