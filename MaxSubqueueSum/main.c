/* main.c -- 测试最小序列和程序 */\
#include "MaxSubqueueSum.h"
#include <stdio.h>
#define ASIZE 4

int main()
{
    int i;
    int a[ASIZE];

    GetRand(a, ASIZE);
    for(i = 0; i < ASIZE; i ++)
    {
        printf("a[%d] = %d ", i, a[i]);
    }
    putchar('\n');

    printf("算法1 = %d\n", MaxSubqueueSum1(a, ASIZE));
    printf("算法2 = %d\n", MaxSubqueueSum2(a, ASIZE));
    printf("算法3 = %d\n", MaxSubqueueSum3(a, ASIZE));
    printf("算法4 = %d\n", MaxSubqueueSum4(a, ASIZE));

    return 0;
}