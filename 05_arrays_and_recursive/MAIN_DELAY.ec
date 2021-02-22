node MAIN_DELAY
  (A: bool)
returns
  (A_delayed: bool);

var
  V67_A_1: bool;
  V68_A_2: bool;
  V69_A_3: bool;
  V70_A_4: bool;
  V71_A_5: bool;
  V72_A_6: bool;
  V73_A_7: bool;
  V74_A_8: bool;
  V75_A_9: bool;

let
  A_delayed = (false -> (pre V75_A_9));
  V67_A_1 = (false -> (pre A));
  V68_A_2 = (false -> (pre V67_A_1));
  V69_A_3 = (false -> (pre V68_A_2));
  V70_A_4 = (false -> (pre V69_A_3));
  V71_A_5 = (false -> (pre V70_A_4));
  V72_A_6 = (false -> (pre V71_A_5));
  V73_A_7 = (false -> (pre V72_A_6));
  V74_A_8 = (false -> (pre V73_A_7));
  V75_A_9 = (false -> (pre V74_A_8));
tel

