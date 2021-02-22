/********
* poc version 1.1
* c header file generated from : TIME_STABLE.oc 
* to be used with : TIME_STABLE.c 
********/
#ifndef _TIME_STABLE_POC_H_FILE
#define _TIME_STABLE_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _TIME_STABLE_POC_PREDEF_TYPES
#define _TIME_STABLE_POC_PREDEF_TYPES
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
   _integer _V3;
   _boolean _V4;
   _integer _V5;
   _boolean _V6;
} TIME_STABLE_ctx;
#ifndef _TIME_STABLE_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: TIME_STABLE 3 1
//IN: _boolean set
//IN: _boolean second
//IN: _integer delay
//OUT: _boolean level
/*--------Context allocation --------*/
extern TIME_STABLE_ctx* TIME_STABLE_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void TIME_STABLE_copy_ctx(TIME_STABLE_ctx* dest, TIME_STABLE_ctx* src);
/*-------- Input procedures ---------*/
extern void TIME_STABLE_I_set(TIME_STABLE_ctx* ctx, _boolean __V);
extern void TIME_STABLE_I_second(TIME_STABLE_ctx* ctx, _boolean __V);
extern void TIME_STABLE_I_delay(TIME_STABLE_ctx* ctx, _integer __V);
/*-------- Reset procedure ----------*/
extern void  TIME_STABLE_reset(TIME_STABLE_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  TIME_STABLE_step(TIME_STABLE_ctx* ctx);
#endif
#endif
