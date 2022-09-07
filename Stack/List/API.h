/* Stack.h -- 定义StackList与接口*/
#ifndef _Stack_H_
#define _Stack_H_

typedef struct node
{
    int Element;
    struct node * Next;
}Node;

typedef Node * PtrNode;
typedef PtrNode Stack;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(int X, Stack S);
int Top(Stack S);
void PoP(Stack S);

#endif