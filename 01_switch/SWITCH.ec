node SWITCH
  (set: bool;
  reset: bool;
  initial: bool)
returns
  (level: bool);

let
  level = (initial -> (if (set and (not (pre level))) then true else (if reset 
  then false else (pre level))));
tel

