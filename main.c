#include "push_swap.h"

void main(int argc, char **argv)
{
    stack_t *stack_a;
    char **split_argv;

    stack_a = malloc(sizeof(stack_t));
    if (stack_a == NULL)
        return (NULL);
    // argcが適切でない場合、null
    if (argc == 1 || argc >= 3)
        return (NULL);

    // argc == 2の場合、処理を行う
    split_argv = ft_split(argv[1], ' ');

    // ヴァリデーションチェックも行う

    // 数字ごとにセパレート

    // stackに数字を格納

    // ソートさせる

    // ソートがちゃんとできたかヴァリデーションチェック

    return;
}