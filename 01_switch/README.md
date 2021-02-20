# A switch node

We want to implement a "switch", taking as input two signals "set" and "reset" and an initial value "initial", and returning a Boolean "level".

## compile the node

$lustre F.lus SWITCH1

$lustre F.lus SWITCH

## simulate a node by luciole

$luciole F.lus SWITCH1

$luciole F.lus SWITCH

## compile a node into a C program

%compiling
$lustre F.lus SWITCH1

%simulating
$lux SWITCH1.oc

The OC code is translated into an instrumented program SWITCH.c

## minimize the automata

$ocmin SWITCH1.oc -v

The -v option sets the verbose mode, and we get:

Loading automaton ...
=> done : 3 states
Minimizing (algo no 1) ...
=> done : 3 => 3  (2 steps)

The minimal one was written in the file SWITCH\_min.oc

* produce a minimal automaton directly
$lustre F.lus SWITCH1 -demand -v

We get:

start normalisation ... done
start minimal network generation .. done (5 -> 5 nodes)
searching data and control ... done
building bdds ... 3 (on 6)   done
  done
building automaton (Demand-driven) ...
computing state space 2 ... done
DONE =>     3 states     7 transitions


