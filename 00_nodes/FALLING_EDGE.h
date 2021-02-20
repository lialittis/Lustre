/********
* poc version 1.1
* c header file generated from : FALLING_EDGE.oc 
* to be used with : FALLING_EDGE.c 
********/
#ifndef _FALLING_EDGE_POC_H_FILE
#define _FALLING_EDGE_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _FALLING_EDGE_POC_PREDEF_TYPES
#define _FALLING_EDGE_POC_PREDEF_TYPES
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
} FALLING_EDGE_ctx;
#ifndef _FALLING_EDGE_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: FALLING_EDGE 1 1
//IN: _boolean X
//OUT: _boolean Y
/*--------Context allocation --------*/
extern FALLING_EDGE_ctx* FALLING_EDGE_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void FALLING_EDGE_copy_ctx(FALLING_EDGE_ctx* dest, FALLING_EDGE_ctx
* src);
/*-------- Input procedures ---------*/
extern void FALLING_EDGE_I_X(FALLING_EDGE_ctx* ctx, _boolean __V);
/*-------- Reset procedure ----------*/
extern void  FALLING_EDGE_reset(FALLING_EDGE_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  FALLING_EDGE_step(FALLING_EDGE_ctx* ctx);
#endif
#endif
