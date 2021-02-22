/********
* poc version 1.1
* c file generated from : MAIN.oc 
********/
#include <stdlib.h>
#include <string.h>
#define _MAIN_POC_SRC_FILE
#include "MAIN.h"
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void MAIN_I_A_0(MAIN_ctx* ctx, _boolean __V){
   ctx->_V1 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_1(MAIN_ctx* ctx, _boolean __V){
   ctx->_V2 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_2(MAIN_ctx* ctx, _boolean __V){
   ctx->_V3 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_3(MAIN_ctx* ctx, _boolean __V){
   ctx->_V4 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_4(MAIN_ctx* ctx, _boolean __V){
   ctx->_V5 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_5(MAIN_ctx* ctx, _boolean __V){
   ctx->_V6 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_6(MAIN_ctx* ctx, _boolean __V){
   ctx->_V7 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_7(MAIN_ctx* ctx, _boolean __V){
   ctx->_V8 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_8(MAIN_ctx* ctx, _boolean __V){
   ctx->_V9 = __V;
   ctx->_V0 = _true;
}
void MAIN_I_A_9(MAIN_ctx* ctx, _boolean __V){
   ctx->_V10 = __V;
   ctx->_V0 = _true;
}
extern void MAIN_O_LIN_OR(void*, _boolean);
extern void MAIN_O_TREE_OR(void*, _boolean);
/*--------
Internal reset input procedure
--------*/
static void MAIN_reset_input(MAIN_ctx* ctx){
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
   ctx->_V0 = _false;
}
/*--------
Reset procedure
--------*/
void MAIN_reset(MAIN_ctx* ctx){
   ctx->current_state = 0;
   MAIN_reset_input(ctx);
}
/*--------
Dynamic allocation of an internal structure
--------*/
MAIN_ctx* MAIN_new_ctx(void* cdata){
   MAIN_ctx* ctx = (MAIN_ctx*)calloc(1, sizeof(MAIN_ctx));
   ctx->client_data = cdata;
   MAIN_reset(ctx);
   return ctx;
}
/*--------
Copy the value of an internal structure
--------*/
void MAIN_copy_ctx(MAIN_ctx* dest, MAIN_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(MAIN_ctx));
}
/*--------
Step procedure
--------*/
void MAIN_step(MAIN_ctx* ctx){
   switch(ctx->current_state){
   case 0:
      if(ctx->_V1){
         ctx->_V11 = _true;
         MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
         ctx->_V12 = _true;
         MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
      } else {
         if(ctx->_V2){
            ctx->_V11 = _true;
            MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
            ctx->_V12 = _true;
            MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
         } else {
            if(ctx->_V3){
               ctx->_V11 = _true;
               MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
               ctx->_V12 = _true;
               MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
            } else {
               if(ctx->_V4){
                  ctx->_V11 = _true;
                  MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                  ctx->_V12 = _true;
                  MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
               } else {
                  if(ctx->_V5){
                     ctx->_V11 = _true;
                     MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                     ctx->_V12 = _true;
                     MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
                  } else {
                     if(ctx->_V6){
                        ctx->_V11 = _true;
                        MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                        ctx->_V12 = _true;
                        MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
                     } else {
                        if(ctx->_V7){
                           ctx->_V11 = _true;
                           MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                           ctx->_V12 = _true;
                           MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
                        } else {
                           if(ctx->_V8){
                              ctx->_V11 = _true;
                              MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                              ctx->_V12 = _true;
                              MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
                           } else {
                              if(ctx->_V9){
                                 ctx->_V11 = _true;
                                 MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                                 ctx->_V12 = _true;
                                 MAIN_O_TREE_OR(ctx->client_data, ctx->_V12);
                              } else {
                                 if(ctx->_V10){
                                    ctx->_V11 = _true;
                                    MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                                    ctx->_V12 = _true;
                                    MAIN_O_TREE_OR(ctx->client_data, ctx->_V12
);
                                 } else {
                                    ctx->_V11 = _false;
                                    MAIN_O_LIN_OR(ctx->client_data, ctx->_V11);
                                    ctx->_V12 = _false;
                                    MAIN_O_TREE_OR(ctx->client_data, ctx->_V12
);
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
      ctx->current_state = 0; break;
   break;
   } /* END SWITCH */
   MAIN_reset_input(ctx);
}
