node FALLING_EDGE
  (X: bool)
returns
  (Y: bool);

var
  V19_X: bool;

let
  Y = (false -> (V19_X and (not (pre V19_X))));
  V19_X = (not X);
tel

