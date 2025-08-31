#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "./libft/libft.h"

// testヘッダー
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

// dataタイプ
typedef int data_t;

// 双方向リスト
typedef struct stack_s
{
    data_t value;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

#endif