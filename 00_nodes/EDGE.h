/********
* poc version 1.1
* c header file generated from : EDGE.oc 
* to be used with : EDGE.c 
********/
#ifndef _EDGE_POC_H_FILE
#define _EDGE_POC_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EDGE_POC_PREDEF_TYPES
#define _EDGE_POC_PREDEF_TYPES
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
} EDGE_ctx;
#ifndef _EDGE_POC_SRC_FILE
/*--------- Pragmas ----------------*/
//MODULE: EDGE 1 1
//IN: _boolean X
//OUT: _boolean Y
/*--------Context allocation --------*/
extern EDGE_ctx* EDGE_new_ctx(void* client_data);
/*--------Context copy -------------*/
extern void EDGE_copy_ctx(EDGE_ctx* dest, EDGE_ctx* src);
/*-------- Input procedures ---------*/
extern void EDGE_I_X(EDGE_ctx* ctx, _boolean __V);
/*-------- Reset procedure ----------*/
extern void  EDGE_reset(EDGE_ctx* ctx);
/*-------- Step procedure ----------*/
extern void  EDGE_step(EDGE_ctx* ctx);
#endif
#endif
