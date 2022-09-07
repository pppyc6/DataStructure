/* Array.h -- 数组实现一元多项式 */
#ifndef _Array_H_
#define _Array_H_

#include <stdbool.h>
#define MAXPOWER 5
typedef struct polynum
{
    int Array[MAXPOWER + 1];
    int HighPower;
} * Ploynum;

// 创造一个多项式
Ploynum MakePloynum(void);

// 初始化一个多项式
void InitializePolynum(Ploynum poly);

// 填入一个多项式
bool Fillin(int power[], int number, Ploynum poly);

// 两个多项式相加
Ploynum Addtion(Ploynum poly1, Ploynum poly2);

// 两个多项式相乘
Ploynum Multiplication(Ploynum poly1, Ploynum poly2);

#endif