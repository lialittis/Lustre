node MAIN_EXC
  (X_0: bool;
  X_1: bool;
  X_2: bool;
  X_3: bool;
  X_4: bool;
  X_5: bool;
  X_6: bool;
  X_7: bool;
  X_8: bool;
  X_9: bool)
returns
  (exclusive: bool);

var
  V110_EX_1: bool;
  V111_EX_2: bool;
  V112_EX_3: bool;
  V113_EX_4: bool;
  V114_EX_5: bool;
  V115_EX_6: bool;
  V116_EX_7: bool;
  V117_EX_8: bool;
  V118_OR_1: bool;
  V119_OR_2: bool;
  V120_OR_3: bool;
  V121_OR_4: bool;
  V122_OR_5: bool;
  V123_OR_6: bool;
  V124_OR_7: bool;
  V125_OR_8: bool;
  V126_OR_9: bool;

let
  exclusive = (V117_EX_8 and (not (V125_OR_8 and X_9)));
  V110_EX_1 = (true and (not (X_0 and X_1)));
  V111_EX_2 = (V110_EX_1 and (not (V118_OR_1 and X_2)));
  V112_EX_3 = (V111_EX_2 and (not (V119_OR_2 and X_3)));
  V113_EX_4 = (V112_EX_3 and (not (V120_OR_3 and X_4)));
  V114_EX_5 = (V113_EX_4 and (not (V121_OR_4 and X_5)));
  V115_EX_6 = (V114_EX_5 and (not (V122_OR_5 and X_6)));
  V116_EX_7 = (V115_EX_6 and (not (V123_OR_6 and X_7)));
  V117_EX_8 = (V116_EX_7 and (not (V124_OR_7 and X_8)));
  V118_OR_1 = (X_0 or X_1);
  V119_OR_2 = (V118_OR_1 or X_2);
  V120_OR_3 = (V119_OR_2 or X_3);
  V121_OR_4 = (V120_OR_3 or X_4);
  V122_OR_5 = (V121_OR_4 or X_5);
  V123_OR_6 = (V122_OR_5 or X_6);
  V124_OR_7 = (V123_OR_6 or X_7);
  V125_OR_8 = (V124_OR_7 or X_8);
  V126_OR_9 = (V125_OR_8 or X_9);
tel

