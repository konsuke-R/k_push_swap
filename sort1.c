#include "push_swap.h"

void push(stack_t *stk, data_t push_data)
{
    // stackサイズを超えていない場合
    stk->data[stk->num] = push_data;
    stk->num++;
}
void pop(stack_t *stk, data_t *pop_data)
{
    stk->num--;
    *pop_data = stk->data[stk->num];
}