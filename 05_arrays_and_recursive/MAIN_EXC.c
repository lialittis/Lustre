/********
* ec2c version 0.68
* c file generated for node : MAIN_EXC 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _MAIN_EXC_EC2C_SRC_FILE
#include "MAIN_EXC.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _X_0;
   _boolean _X_1;
   _boolean _X_2;
   _boolean _X_3;
   _boolean _X_4;
   _boolean _X_5;
   _boolean _X_6;
   _boolean _X_7;
   _boolean _X_8;
   _boolean _X_9;
   //OUTPUTS
   _boolean _exclusive;
   //REGISTERS
} MAIN_EXC_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void MAIN_EXC_I_X_0(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_0 = V;
}
void MAIN_EXC_I_X_1(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_1 = V;
}
void MAIN_EXC_I_X_2(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_2 = V;
}
void MAIN_EXC_I_X_3(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_3 = V;
}
void MAIN_EXC_I_X_4(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_4 = V;
}
void MAIN_EXC_I_X_5(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_5 = V;
}
void MAIN_EXC_I_X_6(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_6 = V;
}
void MAIN_EXC_I_X_7(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_7 = V;
}
void MAIN_EXC_I_X_8(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_8 = V;
}
void MAIN_EXC_I_X_9(MAIN_EXC_ctx* ctx, _boolean V){
   ctx->_X_9 = V;
}
extern void MAIN_EXC_O_exclusive(void* cdata, _boolean);
#ifdef CKCHECK
extern void MAIN_EXC_BOT_exclusive(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void MAIN_EXC_reset_input(MAIN_EXC_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void MAIN_EXC_reset(MAIN_EXC_ctx* ctx){
   MAIN_EXC_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void MAIN_EXC_copy_ctx(MAIN_EXC_ctx* dest, MAIN_EXC_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(MAIN_EXC_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
MAIN_EXC_ctx* MAIN_EXC_new_ctx(void* cdata){
   MAIN_EXC_ctx* ctx = (MAIN_EXC_ctx*)calloc(1, sizeof(MAIN_EXC_ctx));
   ctx->client_data = cdata;
   MAIN_EXC_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void MAIN_EXC_step(MAIN_EXC_ctx* ctx){
//LOCAL VARIABLES
   _boolean L21;
   _boolean L20;
   _boolean L18;
   _boolean L24;
   _boolean L23;
   _boolean L22;
   _boolean L17;
   _boolean L27;
   _boolean L26;
   _boolean L25;
   _boolean L16;
   _boolean L30;
   _boolean L29;
   _boolean L28;
   _boolean L15;
   _boolean L33;
   _boolean L32;
   _boolean L31;
   _boolean L14;
   _boolean L36;
   _boolean L35;
   _boolean L34;
   _boolean L13;
   _boolean L39;
   _boolean L38;
   _boolean L37;
   _boolean L12;
   _boolean L42;
   _boolean L41;
   _boolean L40;
   _boolean L11;
   _boolean L45;
   _boolean L44;
   _boolean L43;
   _boolean L10;
//CODE
   L21 = (ctx->_X_0 && ctx->_X_1);
   L20 = (! L21);
   L18 = (_true && L20);
   L24 = (ctx->_X_0 || ctx->_X_1);
   L23 = (L24 && ctx->_X_2);
   L22 = (! L23);
   L17 = (L18 && L22);
   L27 = (L24 || ctx->_X_2);
   L26 = (L27 && ctx->_X_3);
   L25 = (! L26);
   L16 = (L17 && L25);
   L30 = (L27 || ctx->_X_3);
   L29 = (L30 && ctx->_X_4);
   L28 = (! L29);
   L15 = (L16 && L28);
   L33 = (L30 || ctx->_X_4);
   L32 = (L33 && ctx->_X_5);
   L31 = (! L32);
   L14 = (L15 && L31);
   L36 = (L33 || ctx->_X_5);
   L35 = (L36 && ctx->_X_6);
   L34 = (! L35);
   L13 = (L14 && L34);
   L39 = (L36 || ctx->_X_6);
   L38 = (L39 && ctx->_X_7);
   L37 = (! L38);
   L12 = (L13 && L37);
   L42 = (L39 || ctx->_X_7);
   L41 = (L42 && ctx->_X_8);
   L40 = (! L41);
   L11 = (L12 && L40);
   L45 = (L42 || ctx->_X_8);
   L44 = (L45 && ctx->_X_9);
   L43 = (! L44);
   L10 = (L11 && L43);
   MAIN_EXC_O_exclusive(ctx->client_data, L10);
}
