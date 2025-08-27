#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define SUCCESS 1
#define FAILURE 0

typedef int data_t;

typedef struct stack_s
{
    int num;
    data_t *data;
} stack_t;

#endif