/* API.h 定义StackArray与接口 */
#ifndef _API_H_
#define _API_H_
#include <stdbool.h>
#define EmptyTOS (-1)
#define MinStackSize (5)

typedef struct node
{
    int Capacity;
    int TopOfStack;
    int * Array;
}Node;

typedef Node * PtrNode;
typedef PtrNode Stack;

bool IsEmpty(Stack S);
bool IsFull(Stack S);
Stack CreatStack(int MaxElement);
void MakeEmpty(Stack S);
void Dispose(Stack S);
void Push(int X, Stack S);
int Top(Stack S);
void Pop(Stack S);
int TopAndPop(Stack S);

#endif