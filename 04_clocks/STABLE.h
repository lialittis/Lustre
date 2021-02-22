/********
* poc version 1.1
* c header file generated from : STABLE.oc 
* to be used with : STABLE.c 
********/
#ifndef _STABLE_POC_H_FILE
#define _STABLE_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _STABLE_POC_PREDEF_TYPES
#define _STABLE_POC_PREDEF_TYPES
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
   _integer _V2;
   _boolean _V3;
   _integer _V4;
} STABLE_ctx;
#ifndef _STABLE_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: STABLE 2 1
//IN: _boolean set
//IN: _integer delay
//OUT: _boolean level
/*--------Context allocation --------*/
extern STABLE_ctx* STABLE_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void STABLE_copy_ctx(STABLE_ctx* dest, STABLE_ctx* src);
/*-------- Input procedures ---------*/
extern void STABLE_I_set(STABLE_ctx* ctx, _boolean __V);
extern void STABLE_I_delay(STABLE_ctx* ctx, _integer __V);
/*-------- Reset procedure ----------*/
extern void  STABLE_reset(STABLE_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  STABLE_step(STABLE_ctx* ctx);
#endif
#endif
