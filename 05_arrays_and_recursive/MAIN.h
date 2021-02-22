/********
* poc version 1.1
* c header file generated from : MAIN.oc 
* to be used with : MAIN.c 
********/
#ifndef _MAIN_POC_H_FILE
#define _MAIN_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _MAIN_POC_PREDEF_TYPES
#define _MAIN_POC_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef float _float;
typedef double _double;
#define _false 0
#define _true 1
#endif
/*--------Context type -------------*/
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   int current_state;
   _boolean _V0;
   _boolean _V1;
   _boolean _V2;
   _boolean _V3;
   _boolean _V4;
   _boolean _V5;
   _boolean _V6;
   _boolean _V7;
   _boolean _V8;
   _boolean _V9;
   _boolean _V10;
   _boolean _V11;
   _boolean _V12;
} MAIN_ctx;
#ifndef _MAIN_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: MAIN 10 2
//IN: _boolean A_0
//IN: _boolean A_1
//IN: _boolean A_2
//IN: _boolean A_3
//IN: _boolean A_4
//IN: _boolean A_5
//IN: _boolean A_6
//IN: _boolean A_7
//IN: _boolean A_8
//IN: _boolean A_9
//OUT: _boolean LIN_OR
//OUT: _boolean TREE_OR
/*--------Context allocation --------*/
extern MAIN_ctx* MAIN_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void MAIN_copy_ctx(MAIN_ctx* dest, MAIN_ctx* src);
/*-------- Input procedures ---------*/
extern void MAIN_I_A_0(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_1(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_2(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_3(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_4(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_5(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_6(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_7(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_8(MAIN_ctx* ctx, _boolean __V);
extern void MAIN_I_A_9(MAIN_ctx* ctx, _boolean __V);
/*-------- Reset procedure ----------*/
extern void  MAIN_reset(MAIN_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  MAIN_step(MAIN_ctx* ctx);
#endif
#endif
