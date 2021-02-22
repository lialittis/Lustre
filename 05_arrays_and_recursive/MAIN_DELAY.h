/********
* poc version 1.1
* c header file generated from : MAIN_DELAY.oc 
* to be used with : MAIN_DELAY.c 
********/
#ifndef _MAIN_DELAY_POC_H_FILE
#define _MAIN_DELAY_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _MAIN_DELAY_POC_PREDEF_TYPES
#define _MAIN_DELAY_POC_PREDEF_TYPES
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
   _boolean _V13;
} MAIN_DELAY_ctx;
#ifndef _MAIN_DELAY_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: MAIN_DELAY 1 1
//IN: _boolean A
//OUT: _boolean A_delayed
/*--------Context allocation --------*/
extern MAIN_DELAY_ctx* MAIN_DELAY_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void MAIN_DELAY_copy_ctx(MAIN_DELAY_ctx* dest, MAIN_DELAY_ctx* src);
/*-------- Input procedures ---------*/
extern void MAIN_DELAY_I_A(MAIN_DELAY_ctx* ctx, _boolean __V);
/*-------- Reset procedure ----------*/
extern void  MAIN_DELAY_reset(MAIN_DELAY_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  MAIN_DELAY_step(MAIN_DELAY_ctx* ctx);
#endif
#endif
