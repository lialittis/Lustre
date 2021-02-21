node SINCOS
  (omega: real)
returns
  (sin: real;
  cos: real);

var
  V52_Y: real;
  V55_F: real;
  V63_Y: real;

let
  sin = (omega * V52_Y);
  cos = (1.000000 - (omega * V63_Y));
  V52_Y = (0.000000 -> ((pre V52_Y) + (((cos + (pre cos)) * 0.100000) / 
  2.000000)));
  V55_F = (0.000000 -> (pre sin));
  V63_Y = (0.000000 -> ((pre V63_Y) + (((V55_F + (pre V55_F)) * 0.100000) / 
  2.000000)));
tel

