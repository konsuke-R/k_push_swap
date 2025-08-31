#include "push_swap.h"

// argv文字列が正しい数値列になっているか
int input_validation(char *argv)
{
    int i;
    int len_argv;

    i = 1;
    len_argv = strlen(argv);

    while (i < len_argv)
    {
        if (isdigit(argv[i]))
        {
            return FALSE;
        }
        i += 2;
    }

    return TRUE;
}