node integrator
  (F: real;
  STEP: real;
  init: real)
returns
  (Y: real);

let
  Y = (init -> ((pre Y) + (((F + (pre F)) * STEP) / 2.000000)));
tel

