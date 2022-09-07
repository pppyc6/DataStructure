#include <stdio.h>
#include <stdlib.h>

typedef struct main
{
    int Array[2];
    int Nunber;
}Main;
typedef Main * PtrMain;

int main()
{
    PtrMain A;
    A = malloc(sizeof(Main));

    A->Array[0] = 0;
    A->Array[1] = 1;
    A->Nunber = 0;

    printf("%d", A->Nunber);
    printf(" ");

    return 0;
}