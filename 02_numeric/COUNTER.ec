node COUNTER
  (init: int;
  incr: int;
  X: bool;
  reset: bool)
returns
  (C: int);

var
  V7_PC: int;

let
  C = (if reset then init else (if X then (V7_PC + incr) else V7_PC));
  V7_PC = (init -> (pre C));
tel

