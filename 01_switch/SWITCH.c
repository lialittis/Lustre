/********
* poc version 1.1
* c file generated from : SWITCH.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _SWITCH_POC_SRC_FILE
#include "SWITCH.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void SWITCH_I_set(SWITCH_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
void SWITCH_I_initial(SWITCH_ctx* ctx, _boolean __V){
   ctx->_V2 = __V;
   ctx->_V0 = _true;
}
extern void SWITCH_O_level(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void SWITCH_reset_input(SWITCH_ctx* ctx){
   ctx->_V0 = _false;
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void SWITCH_reset(SWITCH_ctx* ctx){
   ctx->current_state = 0;
   SWITCH_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
SWITCH_ctx* SWITCH_new_ctx(void* cdata){
   SWITCH_ctx* ctx = (SWITCH_ctx*)calloc(1, sizeof(SWITCH_ctx));
   ctx->client_data = cdata;
   SWITCH_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void SWITCH_copy_ctx(SWITCH_ctx* dest, SWITCH_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(SWITCH_ctx));
}
/*--------
Step procedure
--------*/
void SWITCH_step(SWITCH_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      if(ctx->_V2){
         ctx->_V3 = _true;
         SWITCH_O_level(ctx->client_data, ctx->_V3);
         ctx->current_state = 1; break;
      } else {
         ctx->_V3 = _false;
         SWITCH_O_level(ctx->client_data, ctx->_V3);
         ctx->current_state = 2; break;
      }
   break;
   
   case 1:
      if(ctx->_V1){
         ctx->_V3 = _false;
         SWITCH_O_level(ctx->client_data, ctx->_V3);
         ctx->current_state = 2; break;
      } else {
         ctx->_V3 = _true;
         SWITCH_O_level(ctx->client_data, ctx->_V3);
         ctx->current_state = 1; break;
      }
   break;
   
   case 2:
      if(ctx->_V1){
         ctx->_V3 = _true;
         SWITCH_O_level(ctx->client_data, ctx->_V3);
         ctx->current_state = 1; break;
      } else {
         ctx->_V3 = _false;
         SWITCH_O_level(ctx->client_data, ctx->_V3);
         ctx->current_state = 2; break;
      }
   break;
   } /* END SWITCH */
   SWITCH_reset_input(ctx);
}
