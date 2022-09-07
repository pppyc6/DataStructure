/* ListTable.c -- 实现链表操作的函数库 */
#include "ListTable.h"
#include <stdlib.h>
#include <stdio.h>

// 是不是空
bool IsEmpty(List head)
{
    if(head->List == NULL)
        return true;
    else
        return false;
}

// 是不是最后一个节点
bool IsLast(Postion postion)
{
    if(postion->List == NULL)
        return true;
    else
        return false;
}

// 创建一个新链表
bool MakeListTable(List* head)
{
    if((*head = (Node *)malloc(sizeof(Node))) == NULL)
        return false;
    else   
    {
        (*head)->List = NULL;
        (*head)->number = 0;
       return true;
    }
}

// 查找某个数值是否在链表中
Postion Find(int number, List head)
{
    while(head != NULL && head->number == number)
        head = head->List;
    return head;
}

// 寻找前驱元的位置
Postion FindPrebv(int number, List head)
{
    Postion postion;

    while (head != NULL && head->number == number)
    {
        postion = head;
        head = head->List;
    }
    if(head == NULL)
        return NULL;
    else
        return postion;
}

// 删除一个节点
bool DeleteOneNode(int number, List head)
{
    Postion prev, postion;

    if((prev = FindPrebv(number, head)) == NULL)
        return false;
    else    
    {
        postion = prev->List;
        prev->List = prev->List->List;
        free(postion);
        return true;
    }
}

// 删除一整个链表
void DeleteList(List head)
{
    Postion postion;

    while (head != NULL)
    {
        postion = head;
        head = head->List;
        free(postion);
    }  
}

// 插入一个链表
void Insert(List list, Postion prev)
{
    list->List = prev->List;
    prev->List = list;
}

// 生成一个节点
List MakeNode(int number)
{
    List list;

    list = (Node *)malloc(sizeof(Node));
    list->number = number;
    list->List = NULL;
    return list;
}

// 删除一个节点
void DeleteNode(List list)
{
    free(list);
}

// 添加一个节点到链表
void AddTableNode(List list, List head)
{
    while(!IsLast(head))
        head = head->List;
    head->List = list;
        
    return;
}   

