/********
* poc version 1.1
* c file generated from : STABLE.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _STABLE_POC_SRC_FILE
#include "STABLE.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void STABLE_I_set(STABLE_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
void STABLE_I_delay(STABLE_ctx* ctx, _integer __V){
   ctx->_V2 = __V;
   ctx->_V0 = _true;
}
extern void STABLE_O_level(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void STABLE_reset_input(STABLE_ctx* ctx){
   ctx->_V0 = _false;
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void STABLE_reset(STABLE_ctx* ctx){
   ctx->current_state = 0;
   STABLE_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
STABLE_ctx* STABLE_new_ctx(void* cdata){
   STABLE_ctx* ctx = (STABLE_ctx*)calloc(1, sizeof(STABLE_ctx));
   ctx->client_data = cdata;
   STABLE_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void STABLE_copy_ctx(STABLE_ctx* dest, STABLE_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(STABLE_ctx));
}
/*--------
Step procedure
--------*/
void STABLE_step(STABLE_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      if(ctx->_V1){
         ctx->_V4 = ctx->_V2;
      } else {
         ctx->_V4 = 0;
      }
      ctx->_V3 = (ctx->_V4 > 0);
      STABLE_O_level(ctx->client_data, ctx->_V3);
      if(ctx->_V3){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   
   case 1:
      if(ctx->_V1){
         ctx->_V4 = ctx->_V2;
      } else {
         ctx->_V4 = (ctx->_V4 - 1);
      }
      ctx->_V3 = (ctx->_V4 > 0);
      STABLE_O_level(ctx->client_data, ctx->_V3);
      if(ctx->_V3){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   
   case 2:
      if(ctx->_V1){
         ctx->_V4 = ctx->_V2;
      } else {
         ctx->_V4 = 0;
      }
      ctx->_V3 = (ctx->_V4 > 0);
      STABLE_O_level(ctx->client_data, ctx->_V3);
      if(ctx->_V3){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   } /* END SWITCH */
   STABLE_reset_input(ctx);
}
