#include <cutter.h>
#include <stack.h>

static Stack *stack;

void
cut_setup (void)
{
    stack = NULL;
}

void
cut_teardown (void)
{
    if (stack)
        stack_free(stack);
}

void
test_new_stack (void)
{
    stack = stack_new();
    cut_assert(stack_is_empty(stack));
}

void
test_push (void)
{
    stack = stack_new();
    cut_assert_equal_int(0, stack_get_size(stack));
    stack_push(stack, 100);
    cut_assert_equal_int(1, stack_get_size(stack));
    cut_assert(!stack_is_empty(stack));
}
