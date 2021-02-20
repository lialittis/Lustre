node SWITCH
  (set: bool;
  initial: bool)
returns
  (level: bool);

let
  level = (initial -> (if (set and (not (pre level))) then true else (if set 
  then false else (pre level))));
tel

