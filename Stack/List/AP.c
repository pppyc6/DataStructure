/* API.c -- 实现Stack的接口函数 */
#include "API.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int IsEmpty(Stack S)
{
    return S->Next == NULL;    
}

Stack CreateStack(void)
{
    Stack S;
    if((S = (Stack)malloc(sizeof(Node))) == NULL)
        return NULL;
    S->Next = NULL;
    MakeEmpty(S);
    return S;   
}

void MakeEmpty(Stack S)
{
    if(S == NULL)
        return NULL;
    else
        while (!IsEmpty(S))
            Pop(S);
}

int Top(Stack S)
{
    if(S == NULL)
    {
        fprintf(stderr, "S = NULL");
        return -1;
    }
    else
        return S->Next->Element;
}

void Push(int X, Stack S)
{
    Stack TmpCell;
    
    if((TmpCell = (Stack)malloc(sizeof(Node))) == NULL)
        {
            fprintf(stderr, "Out of space!!");
            return;
        }
    else
        TmpCell->Element = X;
        TmpCell->Next = S->Next;
        S->Next = TmpCell;
}

void DisposeStack(Stack S)
{
    if(S == NULL)
    {
        fprintf(stderr, "S = NULL");
        return;
    }
    else
    {
        Stack TmpCell;
        while(S != NULL)
        {
            TmpCell = S;
            S = S->Next;
            free(TmpCell);
        }
    }
}