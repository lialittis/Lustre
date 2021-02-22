node STABLE
  (set: bool;
  delay: int)
returns
  (level: bool);

var
  V5_count: int;

let
  level = (V5_count > 0);
  V5_count = (if set then delay else (if (false -> (pre level)) then ((pre 
  V5_count) - 1) else 0));
tel

