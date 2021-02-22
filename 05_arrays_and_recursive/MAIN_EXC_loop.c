/********
* ec2c version 0.68
* c main file generated for node : MAIN_EXC 
* to be used with : MAIN_EXC.c 
* and             : MAIN_EXC.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "MAIN_EXC.h"

/* Print a promt ? ************************/
static int ISATTY;
/* MACROS DEFINITIONS ****************/
#ifndef TT
#define TT "true"
#endif
#ifndef FF
#define FF "false"
#endif
#ifndef BB
#define BB "bottom"
#endif
#ifdef CKCHECK
/* set this macro for testing output clocks */
#endif

/* Standard Input procedures **************/
_boolean _get_bool(char* n){
   char b[512];
   _boolean r = 0;
   int s = 1;
   char c;
   do {
      if(ISATTY) {
         if((s != 1)||(r == -1)) printf("\a");
         printf("%s (1,t,T/0,f,F) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, "%c", &c);
      r = -1;
      if((c == '0') || (c == 'f') || (c == 'F')) r = 0;
      if((c == '1') || (c == 't') || (c == 'T')) r = 1;
   } while((s != 1) || (r == -1));
   return r;
}
_integer _get_int(char* n){
   char b[512];
   _integer r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         printf("%s (integer) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, "%d", &r);
   } while(s != 1);
   return r;
}
#define REALFORMAT ((sizeof(_real)==8)?"%lf":"%f")
_real _get_real(char* n){
   char b[512];
   _real r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         printf("%s (real) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, REALFORMAT, &r);
   } while(s != 1);
   return r;
}
/* Standard Output procedures **************/
void _put_bottom(char* n){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", BB);
   if(ISATTY) printf("\n");
}
void _put_bool(char* n, _boolean _V){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", (_V)? TT : FF);
   if(ISATTY) printf("\n");
}
void _put_int(char* n, _integer _V){
   if(ISATTY) printf("%s = ", n);
   printf("%d ", _V);
   if(ISATTY) printf("\n");
}
void _put_real(char* n, _real _V){
   if(ISATTY) printf("%s = ", n);
   printf("%f ", _V);
   if(ISATTY) printf("\n");
}
/* Output procedures **********************/
#ifdef CKCHECK
void MAIN_EXC_BOT_exclusive(void* cdata){
   _put_bottom("exclusive");
}
#endif
/* Output procedures **********************/
void MAIN_EXC_O_exclusive(void* cdata, _boolean _V) {
   _put_bool("exclusive", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct MAIN_EXC_ctx* ctx = MAIN_EXC_new_ctx(NULL);
   MAIN_EXC_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      MAIN_EXC_I_X_0(ctx, _get_bool("X_0"));
      MAIN_EXC_I_X_1(ctx, _get_bool("X_1"));
      MAIN_EXC_I_X_2(ctx, _get_bool("X_2"));
      MAIN_EXC_I_X_3(ctx, _get_bool("X_3"));
      MAIN_EXC_I_X_4(ctx, _get_bool("X_4"));
      MAIN_EXC_I_X_5(ctx, _get_bool("X_5"));
      MAIN_EXC_I_X_6(ctx, _get_bool("X_6"));
      MAIN_EXC_I_X_7(ctx, _get_bool("X_7"));
      MAIN_EXC_I_X_8(ctx, _get_bool("X_8"));
      MAIN_EXC_I_X_9(ctx, _get_bool("X_9"));
      MAIN_EXC_step(ctx);
      
   }
   return 1;
   
}
