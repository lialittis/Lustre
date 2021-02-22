node MAIN_DELAY_T
  (A: bool)
returns
  (A_delayed: bool);

let
  A_delayed = (true -> (pre (true -> (pre (true -> (pre A))))));
tel

