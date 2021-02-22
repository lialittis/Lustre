node TIME_STABLE1
  (set: bool;
  second: bool;
  delay: int)
returns
  (level: bool);

var
  V11_count: int;

let
  level = (V11_count > 0);
  V11_count = (if set then delay else (if second then (if (false -> (pre level)
  ) then ((pre V11_count) - 1) else 0) else (0 -> (pre V11_count))));
tel

