/********
* poc version 1.1
* c file generated from : FALLING_EDGE.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _FALLING_EDGE_POC_SRC_FILE
#include "FALLING_EDGE.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void FALLING_EDGE_I_X(FALLING_EDGE_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
extern void FALLING_EDGE_O_Y(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void FALLING_EDGE_reset_input(FALLING_EDGE_ctx* ctx){
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void FALLING_EDGE_reset(FALLING_EDGE_ctx* ctx){
   ctx->current_state = 0;
   FALLING_EDGE_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
FALLING_EDGE_ctx* FALLING_EDGE_new_ctx(void* cdata){
   FALLING_EDGE_ctx* ctx = (FALLING_EDGE_ctx*)calloc(1, sizeof(FALLING_EDGE_ctx
));
   ctx->client_data = cdata;
   FALLING_EDGE_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void FALLING_EDGE_copy_ctx(FALLING_EDGE_ctx* dest, FALLING_EDGE_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(FALLING_EDGE_ctx));
}
/*--------
Step procedure
--------*/
void FALLING_EDGE_step(FALLING_EDGE_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      ctx->_V2 = _false;
      FALLING_EDGE_O_Y(ctx->client_data, ctx->_V2);
      if(ctx->_V1){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   
   case 1:
      if(ctx->_V1){
         ctx->_V2 = _false;
         FALLING_EDGE_O_Y(ctx->client_data, ctx->_V2);
         ctx->current_state = 1; break;
      } else {
         ctx->_V2 = _true;
         FALLING_EDGE_O_Y(ctx->client_data, ctx->_V2);
         ctx->current_state = 2; break;
      }
   break;
   
   case 2:
      ctx->_V2 = _false;
      FALLING_EDGE_O_Y(ctx->client_data, ctx->_V2);
      if(ctx->_V1){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   } /* END SWITCH */
   FALLING_EDGE_reset_input(ctx);
}
