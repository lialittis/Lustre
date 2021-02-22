node MAIN_ADD
  (A_0: bool;
  A_1: bool;
  A_2: bool;
  A_3: bool;
  B_0: bool;
  B_1: bool;
  B_2: bool;
  B_3: bool)
returns
  (S_0: bool;
  S_1: bool;
  S_2: bool;
  S_3: bool);

var
  V47_carry: bool;
  V192_C_0: bool;
  V193_C_1: bool;
  V194_C_2: bool;

let
  S_0 = ((A_0 xor B_0) xor false);
  S_1 = ((A_1 xor B_1) xor V192_C_0);
  S_2 = ((A_2 xor B_2) xor V193_C_1);
  S_3 = ((A_3 xor B_3) xor V194_C_2);
  V47_carry = (((A_3 and B_3) or (B_3 and V194_C_2)) or (V194_C_2 and A_3));
  V192_C_0 = (((A_0 and B_0) or (B_0 and false)) or (false and A_0));
  V193_C_1 = (((A_1 and B_1) or (B_1 and V192_C_0)) or (V192_C_0 and A_1));
  V194_C_2 = (((A_2 and B_2) or (B_2 and V193_C_1)) or (V193_C_1 and A_2));
tel

