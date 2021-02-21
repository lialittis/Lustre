node minmax
  (x: int;
  y: int)
returns
  (min: int;
  max: int);

let
  min = (if (x < y) then x else y);
  max = (if (x < y) then y else x);
tel

