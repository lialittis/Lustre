node TIME_STABLE
  (set: bool;
  second: bool;
  delay: int)
returns
  (level: bool);

var
  V17_ck: bool;
  (V42_count: int) when V17_ck;
  (V41_level: bool) when V17_ck;

let
  level = (current V41_level);
  V17_ck = (true -> (set or second));
  V42_count = (if ((set) when V17_ck) then ((delay) when V17_ck) else (if (((
  false) when V17_ck) -> (pre V41_level)) then ((pre V42_count) - ((1) when 
  V17_ck)) else ((0) when V17_ck)));
  V41_level = (V42_count > ((0) when V17_ck));
tel

