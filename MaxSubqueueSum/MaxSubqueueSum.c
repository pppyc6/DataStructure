/* MaxSubqueueSum.c -- 函数实现 */
#include "MaxSubqueueSum.h"
#include <time.h>
#include <stdlib.h>

static int MaxSum3(const int a[], int Left, int Right);
static int Max3(int a, int b, int c);

// 随机插入数0~100
void GetRand(int a[], int n)
{
    int i;
    srand((unsigned int) time(NULL));
    for ( i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    return;
}
// 算法1
int MaxSubqueueSum1( const int a[], int n)
{
    int ThisSum, MaxSum, i, j, k;

    MaxSum = 0;
    for(i = 0; i < n; i ++)
    {
        for(j = i; j < n; j ++)
        {
            ThisSum = 0;
            for(k = i; k <= j; k ++)
                ThisSum += a[k];
            if(ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }
    return MaxSum;
}
int MaxSubqueueSum2(const int a[], int n)
{
    int ThisSum, MaxSum, i, j;

    MaxSum = 0;
    for(i = 0; i < n; i ++)
    {
        ThisSum = 0;
        for(j = i; j < n; j ++)
        {   
            ThisSum += a[j];
            if(ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }
    return MaxSum;
}
static int Max3(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else
        if(b > c)
            return b;
        else 
            return c;
}
static int MaxSum3(const int a[], int Left, int Right)
{
    int MaxLeftSum, MaxRightSum;
    int MaxLeftBorderSum, MaxRightBorderSum;
    int LeftBorderSum, RightBorderSum;
    int i, Center;
    
    if(Left == Right)
    {    if(a[Left] > 0)
            return a[Left];
        else
            return 0;
    }

    Center = (Left + Right) / 2;
    MaxLeftSum = MaxSum3(a, Left, Center-1);
    MaxRightSum = MaxSum3(a, Center , Right);

    MaxLeftBorderSum = 0;
    LeftBorderSum = 0;
    for(i = Center; i >= Left; i --)
    {
        LeftBorderSum += a[i];
        if(LeftBorderSum > MaxLeftBorderSum)
            MaxLeftBorderSum = LeftBorderSum;
    }

    MaxRightBorderSum = 0;
    RightBorderSum = 0;
    for(i = Center + 1; i <= Right; i ++)
    {
        RightBorderSum += a[i];
        if(RightBorderSum > MaxRightSum)
            MaxRightBorderSum = RightBorderSum;
    }

    return Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);

}
int MaxSubqueueSum3(const int a[], int n)
{
    return MaxSum3(a, 0, n - 1);
}

// 算法4
int MaxSubqueueSum4(const int a[], int n)
{
    int ThisSum, MaxSum;
    int i;

    ThisSum = 0;
    MaxSum = 0;
    for(i = 0; i < n; i ++)
    {
        ThisSum += a[i];
        if(ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if(ThisSum < 0)
            ThisSum = 0;
    }
    return MaxSum;
}   