/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : MAIN_EXC 
* to be used with : MAIN_EXC.c 
********/
#ifndef _MAIN_EXC_EC2C_H_FILE
#define _MAIN_EXC_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: MAIN_EXC 10 1
//IN: _boolean X_0
//IN: _boolean X_1
//IN: _boolean X_2
//IN: _boolean X_3
//IN: _boolean X_4
//IN: _boolean X_5
//IN: _boolean X_6
//IN: _boolean X_7
//IN: _boolean X_8
//IN: _boolean X_9
//OUT: _boolean exclusive
#ifndef _MAIN_EXC_EC2C_SRC_FILE
/*--------Context type -------------*/
struct MAIN_EXC_ctx;
/*-------- Input procedures -------------*/
extern void MAIN_EXC_I_X_0(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_1(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_2(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_3(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_4(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_5(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_6(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_7(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_8(struct MAIN_EXC_ctx* ctx, _boolean);
extern void MAIN_EXC_I_X_9(struct MAIN_EXC_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void MAIN_EXC_reset(struct MAIN_EXC_ctx* ctx);
/*--------Context copy -------------*/
extern void MAIN_EXC_copy_ctx(struct MAIN_EXC_ctx* dest, struct MAIN_EXC_ctx
* src);
/*--------Context allocation --------*/
extern struct MAIN_EXC_ctx* MAIN_EXC_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void MAIN_EXC_step(struct MAIN_EXC_ctx* ctx);
#endif
#endif
