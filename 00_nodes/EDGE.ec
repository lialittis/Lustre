node EDGE
  (X: bool)
returns
  (Y: bool);

let
  Y = (false -> (X and (not (pre X))));
tel

