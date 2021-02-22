/********
* poc version 1.1
* c main file generated from : MAIN.oc 
* to be used with : MAIN.c 
* and             : MAIN.h 
********/
#include <stdlib.h>
#include <stdio.h>
#include "MAIN.h"
/* Print a promt ? ************************/
static int ISATTY;
/* Output procedures **********************/
void MAIN_O_LIN_OR(void* cdata, _boolean v){
   if(ISATTY) printf("LIN_OR = ");
   printf("%s\n", (v)? "true" : "false");
}
void MAIN_O_TREE_OR(void* cdata, _boolean v){
   if(ISATTY) printf("TREE_OR = ");
   printf("%s\n", (v)? "true" : "false");
}
/* Standard Input procedures **************/
int _get_pure(char* n){
   char b[512];
   int r, s;
   do {
      if(ISATTY) printf("%s (present=1/absent=0) ? ", n);
      if(scanf("%s", &b)==EOF) exit(0);
      s = sscanf(b, "%d", &r);
   } while((s != 1) || ((r != 0) && (r != 1)));
   return r;
}
int _get_bool(char* n){
   char b[512];
   int r, s;
   do {
      if(ISATTY) printf("%s (true=1/false=0) ? ", n);
      if(scanf("%s", &b)==EOF) exit(0);
      s = sscanf(b, "%d", &r);
   } while((s != 1) || ((r != 0) && (r != 1)));
   return r;
}
int _get_int(char* n){
   char b[512];
   int r, s;
   do {
      if(ISATTY) printf("%s (integer) ? ", n);
      if(scanf("%s", &b)==EOF) exit(0);
      s = sscanf(b, "%d", &r);
   } while(s != 1);
   return r;
}
static char string_buf[1024];
char* _get_string(char* n){
   int r, s;
   if(ISATTY) printf("%s (string) ? ", n);
   if(scanf("%s", &string_buf[0])==EOF) exit(0);
   return (&string_buf[0]);
}
float _get_float(char* n){
   char b[512];
   float r; int s;
   do {
      if(ISATTY) printf("%s (float) ? ", n);
      if(scanf("%s", &b)==EOF) exit(0);
      s = sscanf(b, "%f", &r);
   } while(s != 1);
   return r;
}
double _get_double(char* n){
   char b[512];
   double r; int s;
   do {
      if(ISATTY) printf("%s (double) ? ", n);
      if(scanf("%s", &b)==EOF) exit(0);
      s = sscanf(b, "%lf", &r);
   } while(s != 1);
   return r;
}
/* Main procedure *************************/
main(){
   /* Context allocation */
   int s = 0;
   MAIN_ctx* ctx = MAIN_new_ctx(NULL);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      printf("##### STEP %d ##################\n", ++s);
      MAIN_I_A_0(ctx, _get_bool("A_0"));
      MAIN_I_A_1(ctx, _get_bool("A_1"));
      MAIN_I_A_2(ctx, _get_bool("A_2"));
      MAIN_I_A_3(ctx, _get_bool("A_3"));
      MAIN_I_A_4(ctx, _get_bool("A_4"));
      MAIN_I_A_5(ctx, _get_bool("A_5"));
      MAIN_I_A_6(ctx, _get_bool("A_6"));
      MAIN_I_A_7(ctx, _get_bool("A_7"));
      MAIN_I_A_8(ctx, _get_bool("A_8"));
      MAIN_I_A_9(ctx, _get_bool("A_9"));
      MAIN_step(ctx);
   }
}
