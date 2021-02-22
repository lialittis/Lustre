/********
* poc version 1.1
* c file generated from : MAIN_DELAY.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _MAIN_DELAY_POC_SRC_FILE
#include "MAIN_DELAY.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void MAIN_DELAY_I_A(MAIN_DELAY_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
extern void MAIN_DELAY_O_A_delayed(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void MAIN_DELAY_reset_input(MAIN_DELAY_ctx* ctx){
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void MAIN_DELAY_reset(MAIN_DELAY_ctx* ctx){
   ctx->current_state = 0;
   ctx->_V2 = _true;
   MAIN_DELAY_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
MAIN_DELAY_ctx* MAIN_DELAY_new_ctx(void* cdata){
   MAIN_DELAY_ctx* ctx = (MAIN_DELAY_ctx*)calloc(1, sizeof(MAIN_DELAY_ctx));
   ctx->client_data = cdata;
   MAIN_DELAY_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void MAIN_DELAY_copy_ctx(MAIN_DELAY_ctx* dest, MAIN_DELAY_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(MAIN_DELAY_ctx));
}
/*--------
Step procedure
--------*/
void MAIN_DELAY_step(MAIN_DELAY_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      ctx->_V12 = (ctx->_V2? _false : ctx->_V3);
      MAIN_DELAY_O_A_delayed(ctx->client_data, ctx->_V12);
      ctx->_V3 = (ctx->_V2? _false : ctx->_V4);
      ctx->_V4 = (ctx->_V2? _false : ctx->_V5);
      ctx->_V5 = (ctx->_V2? _false : ctx->_V6);
      ctx->_V6 = (ctx->_V2? _false : ctx->_V7);
      ctx->_V7 = (ctx->_V2? _false : ctx->_V8);
      ctx->_V8 = (ctx->_V2? _false : ctx->_V9);
      ctx->_V9 = (ctx->_V2? _false : ctx->_V10);
      ctx->_V10 = (ctx->_V2? _false : ctx->_V11);
      ctx->_V11 = (ctx->_V2? _false : ctx->_V13);
      ctx->_V2 = _false;
      ctx->_V13 = ctx->_V1;
      ctx->current_state = 0; break;
   break;
   } /* END SWITCH */
   MAIN_DELAY_reset_input(ctx);
}
