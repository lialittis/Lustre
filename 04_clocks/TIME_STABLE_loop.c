/********
* poc version 1.1
* c main file generated from : TIME_STABLE.oc 
* to be used with : TIME_STABLE.c 
* and             : TIME_STABLE.h 
********/
#include <stdlib.h>
#include <stdio.h>
#include "TIME_STABLE.h"
/* Print a promt ? ************************/
static int ISATTY;
/* Output procedures **********************/
void TIME_STABLE_O_level(void* cdata, _boolean v){
   if(ISATTY) printf("level = ");
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
   TIME_STABLE_ctx* ctx = TIME_STABLE_new_ctx(NULL);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      printf("##### STEP %d ##################\n", ++s);
      TIME_STABLE_I_set(ctx, _get_bool("set"));
      TIME_STABLE_I_second(ctx, _get_bool("second"));
      TIME_STABLE_I_delay(ctx, _get_int("delay"));
      TIME_STABLE_step(ctx);
   }
}
