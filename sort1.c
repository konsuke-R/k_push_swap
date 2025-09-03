#include "push_swap.h"

void push(stack_t *stk, data_t push_data)
{
    // stackサイズを超えていない場合
    stk->value[stk->idx] = push_data;
    stk++;
}
void pop(stack_t *stk, data_t *pop_data)
{
    stk->num--;
    *pop_data = stk->data[stk->num];
}

void rotate(stack_t *stk_a)
{
    data_t data;
    stack_t *stk_b;
    while (stk_a->num >= 0)
    {
        pop(stk_a, data);
        push(stk_b, data);
    }

    while (stk_b->num >= 0)
    {
        pop(stk_b, data);
        push(stk_a, data);
    }
}

void double_rotate(stack_t *stk_a, stack_t *stk_b)
{
    rotate(stk_a);
    rotate(stk_b);
}

void sa(stack_t *stk_a)
{
    stk_a->value[stk_a->idx] = stk_a->next;
}