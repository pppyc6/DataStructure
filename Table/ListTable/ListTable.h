/* ListTab.h -- 链表的定义头文件 */
#ifndef _ListTable_H_
#define _ListTable_H_

#include <stdbool.h>

/*  定义:       链表中的元
    可用操作:   创造、删除  */
typedef struct node
{
    int number;
    struct node * List;
} Node;

typedef struct node * proList;

/*  定义:       指向一个链表的指针
    可用操作:   检查是否为空、创造、查找、查找链表中一个节点的前驱元、删除链表中的一个节点 、删除整个链表   */
typedef proList List;

/*  定义:       链表中的一个节点的位置
    可用操作:   删除链表一个节点、查找链表一个节点和查找链表中一个节点的前驱元  */
typedef proList Postion;

/*  操作:       制作一个空的链表
    前置条件:   head是一个指向struct node的指针
    后置条件:   成功返回true, 失败返回false */
bool MakeListTable(List * head);

/*  操作:       检查是否是个空的链表
    前置条件:   head是链表的头指针
    后置条件:   空返回true, 不空返回false   */
bool IsEmpty(List head);

/*  操作:       检查是否是最后一个链表
    前置条件:   postion是指向这个链表的指针
    后置条件:   是最后一个返回true, 不是返回false   */
bool IsLast(Postion postion);

/*  操作:       寻找是否有number
    前置条件:   number是寻找的数字, head是指向这个链表的头指针
    后置条件:   有返回位置, 失败返回NULL    */
Postion Find(int number, List head);

/*  操作:       找到这个数值的前驱元
    前置条件:   number是这个数值的大小, head是这个链表的头指针
    后置条件:   成功返会这个前驱元的位置, 失败返回NULL*/
Postion FindPrebv(int number, List head);

/*  操作:       删除链表中包含数值为number的节点
    前置条件:   number是数值大小
    后置条件:   删除成功返回true, 失败返回false */
bool DeleteOneNode(int number, List head);

/*  操作:       删除一整个链表
    前置条件:   head是链表的头指针
    后置条件:   删除成功返回true, 失败返回false */
void DeleteList(List head);

/*  操作:       将一个节点插入到链表中一个节点的后面
    前置条件:   postion是该节点的指针, prev是链表中节点的位置   */
void Insert(List list, Postion prev);

/*  操作:       生成一个节点
    前置条件:   number是需要填入节点的整数
    后置条件:   返回指向该节点指针  */
List MakeNode(int number);

/*  操作:       删除一个节点
    前置条件:   list是指向一个节点的指针    */
void DeleteNode(List list);

/*  操作:       添加一个节点到链表
    前置条件:   
    后置条件:     */
void AddTableNode(List list, List head);

#endif