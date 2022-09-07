/* main.c -- 测试链表 */

#include <stdio.h>
#include "ListTable.h"
#include <stdlib.h>

int main()
{
    int * num;
    num = (int *)malloc(5 * sizeof(int));
    printf("%zd %zd", sizeof(num), sizeof(int *));
    free(num);

    return 0;
}