#ifndef __STACK_H__
#define __STACK_H__

typedef struct _Stack Stack;

Stack *stack_new      (void);
int    stack_is_empty (Stack *stack);
int    stack_get_size (Stack *stack);
void   stack_push     (Stack *stack, int value);
void   stack_free     (Stack *stack);

#endif
