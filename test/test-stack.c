#include <cutter.h>
#include <stack.h>

void
test_new_stack (void)
{
    Stack *stack;
    stack = stack_new();
    cut_assert(stack_is_empty(stack));
}

void
test_push (void)
{
    Stack *stack;

    stack = stack_new();
    cut_assert_equal_int(0, stack_get_size(stack));
    stack_push(stack, 100);
    cut_assert_equal_int(1, stack_get_size(stack));
    cut_assert(!stack_is_empty(stack));
}
