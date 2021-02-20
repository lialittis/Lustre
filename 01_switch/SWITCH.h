/********
* poc version 1.1
* c header file generated from : SWITCH.oc 
* to be used with : SWITCH.c 
********/
#ifndef _SWITCH_POC_H_FILE
#define _SWITCH_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _SWITCH_POC_PREDEF_TYPES
#define _SWITCH_POC_PREDEF_TYPES
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
} SWITCH_ctx;
#ifndef _SWITCH_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: SWITCH 2 1
//IN: _boolean set
//IN: _boolean initial
//OUT: _boolean level
/*--------Context allocation --------*/
extern SWITCH_ctx* SWITCH_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void SWITCH_copy_ctx(SWITCH_ctx* dest, SWITCH_ctx* src);
/*-------- Input procedures ---------*/
extern void SWITCH_I_set(SWITCH_ctx* ctx, _boolean __V);
extern void SWITCH_I_initial(SWITCH_ctx* ctx, _boolean __V);
/*-------- Reset procedure ----------*/
extern void  SWITCH_reset(SWITCH_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  SWITCH_step(SWITCH_ctx* ctx);
#endif
#endif
