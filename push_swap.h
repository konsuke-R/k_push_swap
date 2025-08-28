#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// testヘッダー
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

// dataタイプ
typedef int data_t;

// stack構造
typedef struct stack_s
{
    int num;
    data_t *data;
} stack_t;

#endif