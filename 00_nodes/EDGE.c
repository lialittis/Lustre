/********
* poc version 1.1
* c file generated from : EDGE.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _EDGE_POC_SRC_FILE
#include "EDGE.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void EDGE_I_X(EDGE_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
extern void EDGE_O_Y(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void EDGE_reset_input(EDGE_ctx* ctx){
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void EDGE_reset(EDGE_ctx* ctx){
   ctx->current_state = 0;
   EDGE_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
EDGE_ctx* EDGE_new_ctx(void* cdata){
   EDGE_ctx* ctx = (EDGE_ctx*)calloc(1, sizeof(EDGE_ctx));
   ctx->client_data = cdata;
   EDGE_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void EDGE_copy_ctx(EDGE_ctx* dest, EDGE_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(EDGE_ctx));
}
/*--------
Step procedure
--------*/
void EDGE_step(EDGE_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      ctx->_V2 = _false;
      EDGE_O_Y(ctx->client_data, ctx->_V2);
      if(ctx->_V1){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   
   case 1:
      ctx->_V2 = _false;
      EDGE_O_Y(ctx->client_data, ctx->_V2);
      if(ctx->_V1){
         ctx->current_state = 1; break;
      } else {
         ctx->current_state = 2; break;
      }
   break;
   
   case 2:
      if(ctx->_V1){
         ctx->_V2 = _true;
         EDGE_O_Y(ctx->client_data, ctx->_V2);
         ctx->current_state = 1; break;
      } else {
         ctx->_V2 = _false;
         EDGE_O_Y(ctx->client_data, ctx->_V2);
         ctx->current_state = 2; break;
      }
   break;
   } /* END SWITCH */
   EDGE_reset_input(ctx);
}
