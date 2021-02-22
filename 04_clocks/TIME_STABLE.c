/********
* poc version 1.1
* c file generated from : TIME_STABLE.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _TIME_STABLE_POC_SRC_FILE
#include "TIME_STABLE.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void TIME_STABLE_I_set(TIME_STABLE_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
void TIME_STABLE_I_second(TIME_STABLE_ctx* ctx, _boolean __V){
   ctx->_V2 = __V;
   ctx->_V0 = _true;
}
void TIME_STABLE_I_delay(TIME_STABLE_ctx* ctx, _integer __V){
   ctx->_V3 = __V;
   ctx->_V0 = _true;
}
extern void TIME_STABLE_O_level(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void TIME_STABLE_reset_input(TIME_STABLE_ctx* ctx){
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void TIME_STABLE_reset(TIME_STABLE_ctx* ctx){
   ctx->current_state = 0;
   TIME_STABLE_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
TIME_STABLE_ctx* TIME_STABLE_new_ctx(void* cdata){
   TIME_STABLE_ctx* ctx = (TIME_STABLE_ctx*)calloc(1, sizeof(TIME_STABLE_ctx));
   ctx->client_data = cdata;
   TIME_STABLE_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void TIME_STABLE_copy_ctx(TIME_STABLE_ctx* dest, TIME_STABLE_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(TIME_STABLE_ctx));
}
/*--------
Step procedure
--------*/
void TIME_STABLE_step(TIME_STABLE_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      if(ctx->_V1){
         ctx->_V4 = (ctx->_V3 > 0);
         ctx->_V5 = ctx->_V3;
      } else {
         ctx->_V4 = _false;
         ctx->_V5 = 0;
      }
      if(ctx->_V4){
         ctx->_V6 = _true;
         TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
         ctx->current_state = 1; break;
      } else {
         ctx->_V6 = _false;
         TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
         ctx->current_state = 2; break;
      }
   break;
   
   case 1:
      if(ctx->_V1){
         ctx->_V4 = (ctx->_V3 > 0);
         ctx->_V5 = ctx->_V3;
         if(ctx->_V4){
            ctx->_V6 = _true;
            TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
            ctx->current_state = 1; break;
         } else {
            ctx->_V6 = _false;
            TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
            ctx->current_state = 2; break;
         }
      } else {
         if(ctx->_V2){
            ctx->_V4 = ((ctx->_V5 - 1) > 0);
            ctx->_V5 = (ctx->_V5 - 1);
            if(ctx->_V4){
               ctx->_V6 = _true;
               TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
               ctx->current_state = 1; break;
            } else {
               ctx->_V6 = _false;
               TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
               ctx->current_state = 2; break;
            }
         } else {
            ctx->_V6 = _true;
            TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
            ctx->current_state = 1; break;
         }
      }
   break;
   
   case 2:
      if(ctx->_V1){
         ctx->_V4 = (ctx->_V3 > 0);
         ctx->_V5 = ctx->_V3;
         if(ctx->_V4){
            ctx->_V6 = _true;
            TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
            ctx->current_state = 1; break;
         } else {
            ctx->_V6 = _false;
            TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
            ctx->current_state = 2; break;
         }
      } else {
         if(ctx->_V2){
            ctx->_V4 = _false;
            ctx->_V5 = 0;
            if(ctx->_V4){
               ctx->_V6 = _true;
               TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
               ctx->current_state = 1; break;
            } else {
               ctx->_V6 = _false;
               TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
               ctx->current_state = 2; break;
            }
         } else {
            ctx->_V6 = _false;
            TIME_STABLE_O_level(ctx->client_data, ctx->_V6);
            ctx->current_state = 2; break;
         }
      }
   break;
   } /* END SWITCH */
   TIME_STABLE_reset_input(ctx);
}
