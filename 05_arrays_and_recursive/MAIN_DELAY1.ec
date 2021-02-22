node MAIN_DELAY1
  (A: bool)
returns
  (A_delayed: bool);

let
  A_delayed = (false -> (pre (false -> (pre (false -> (pre A))))));
tel

