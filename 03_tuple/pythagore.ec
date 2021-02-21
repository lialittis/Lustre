node pythagore
  (omega: real)
returns
  (one: real);

var
  V13_s: real;
  V14_c: real;
  V74_Y: real;
  V75_F: real;
  V76_Y: real;

let
  one = ((V13_s * V13_s) + (V14_c * V14_c));
  V13_s = (omega * V74_Y);
  V14_c = (1.000000 - (omega * V76_Y));
  V74_Y = (0.000000 -> ((pre V74_Y) + (((V14_c + (pre V14_c)) * 0.100000) / 
  2.000000)));
  V75_F = (0.000000 -> (pre V13_s));
  V76_Y = (0.000000 -> ((pre V76_Y) + (((V75_F + (pre V75_F)) * 0.100000) / 
  2.000000)));
tel

