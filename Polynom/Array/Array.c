/* Array.c -- 实现数组实现一元多项式的接口 */
#include "Array.h"
#include <stdlib.h>
#include <stdbool.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

Ploynum MakePloynum(void)
{
    Ploynum poly;
    poly = malloc(sizeof(struct polynum));
    return poly;
}

void InitializePolynum(Ploynum poly)
{
    int i;

    for(i = 0; i <= MAXPOWER; i ++)
        poly->Array[i] = 0;
}

bool Fillin(int number[], int highpower, Ploynum poly)
{
    int i;

    if(highpower > poly->HighPower)
        return false;
    else
    {
        for(i = 0; i <= highpower; i ++)
            poly->Array[i] = number[i];
        poly->HighPower = highpower;
        return true;
    }
}

Ploynum Addtion(Ploynum poly1, Ploynum poly2)
{
    Ploynum PolySum;
    int size = MAX(poly1->HighPower, poly2->HighPower);
    int number[size];
    int i;

    PolySum = MakePloynum();
    InitializePolynum(PolySum);
    for(i = 0; i <= size; i ++)
        number[i] = poly1->Array[i] + poly2->Array[i];
    Fillin(number, size, PolySum);

    return PolySum;
}

Ploynum Multiplication(Ploynum poly1, Ploynum poly2)
{
    if(poly1->HighPower + poly2->HighPower > MAXPOWER)
        return NULL;

    Ploynum polymult;
    int size = MAX(poly1->HighPower, poly2->HighPower);
    int i, j;
    int number[size];

    polymult = MakePloynum();
    InitializePolynum(polymult);

    for(i = 0; i <= poly1->HighPower; i ++)
        for(j = 0; j <= poly2->HighPower; j ++)
            number[i + j] += poly1->Array[i] * poly2->Array[i];
    Fillin(number, size, polymult);

    return polymult;
}