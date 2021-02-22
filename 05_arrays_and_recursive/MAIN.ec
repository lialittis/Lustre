node MAIN
  (A_0: bool;
  A_1: bool;
  A_2: bool;
  A_3: bool;
  A_4: bool;
  A_5: bool;
  A_6: bool;
  A_7: bool;
  A_8: bool;
  A_9: bool)
returns
  (LIN_OR: bool;
  TREE_OR: bool);

let
  LIN_OR = (A_0 or (A_1 or (A_2 or (A_3 or (A_4 or (A_5 or (A_6 or (A_7 or (A_8 
  or A_9)))))))));
  TREE_OR = (((A_0 or A_1) or (A_2 or (A_3 or A_4))) or ((A_5 or A_6) or (A_7 
  or (A_8 or A_9))));
tel

