/* API.c -- 实现StackArray的接口函数 */
#include "API.h"
#include <stdio.h>
#include <stdlib.h>

bool IsEmpty(Stack S)
{
    return S->TopOfStack == EmptyTOS;
}

bool IsFull(Stack S)
{
    return S->TopOfStack == S->Capacity;
}

void MakeEmpty(Stack S)
{
    S->TopOfStack = EmptyTOS;
}

Stack CreatStack(int MaxElement)
{
    Stack S;

    if(MaxElement < MinStackSize)
    {
        fprintf(stderr, "MinStackSize < MaxElement");
        return (Stack)NULL;
    }
    else
    {
        if((S = (Stack)malloc(sizeof(Node))) == NULL)
        {
            fprintf(stderr, "S = malloc(Node) == NULL");
            return (Stack)NULL;
        }
        else if((S->Array = (int *)malloc(sizeof(int) * MaxElement)) == NULL)
        {
            fprintf(stderr, "S->Array = malloc(Node) == NULL");
            free(S);
            return (Stack)NULL;
        }
        MakeEmpty(S);
        return S;
    }
}

void Dispose(Stack S)
{
    if(S != NULL)
    {
        free(S->Array);
        free(S);
    }
}

int Top(Stack S)
{
    if(S == NULL)
    {
        fprintf(stderr, "S = NULL");
        return 0;
    }
    else
        return S->Array[S->TopOfStack];
}

void Pop(Stack S)
{
    if(S == NULL)
    {
        fprintf(stderr, "S == NULL");
        return;
    }
    else if(IsEmpty(S))
    {
        fprintf(stderr, "IsEmpty");
        return;
    }
    else
        S->TopOfStack--;
}

void Push(int X, Stack S)
{
    if (S == NULL)
    {
        fprintf(stderr, "S == NULL");
        return;
    }
    else if(IsFull(S))
    {
        fprintf(stderr, "IsFull");
        return;
    }
    else
        S->Array[++ S->TopOfStack] = X;
}

int TopAndPop(Stack S)
{
    if (S == NULL)
    {
        fprintf(stderr, "S == NULL");
        return -1;
    }
    else if (IsEmpty(S))
    {
        fprintf(stderr, "IsEmpty");
        return -1;
    }
    else 
        return S->Array[S->TopOfStack --];
}