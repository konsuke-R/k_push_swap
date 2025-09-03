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
typedef long data_t;

// 双方向リスト
typedef struct stack_s
{
    data_t value;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

// コマンド
typedef enum s_cmd {
    PA,
    PB,
    SA,
    SB,
    SS,
    RA,
    RB,
    RR,
    RRA,
    RRB,
    RRR
} t_cmd;

// 関数
int validate_argv(char **);

#endif