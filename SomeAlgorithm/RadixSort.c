/* RadixSort.c -- 基数排序 */
#include <stdlib.h>

typedef struct node
{
    int Number;
    struct node *Next;
} Node;
typedef Node *PtrNode;
typedef PtrNode List;

// 添加一个新元到一个桶的末尾
static void AddNode(list);

// 是一个桶组变成空
static void MakeEmpty(List Bucket[], int BucketSize);

// 制造一个新元, 返回指向元的指针
static List MakeNewNode();

// 初始化一个Bucket[]
static void ZerolizeBucket(List Bucket[], int Number);

int RadixSort(int BucketSize, int Array[], int ArratSize, int amount)
{
    List Bucket[BucketSize];
    int Number;
    int i;

    

    return 0;
}
static void AddNode(int number ,List prev)
{
    List list;

    list = MakeNewNode();
    list->Number = number;

    while(prev->Next != NULL)
        prev = prev->Next;
    prev->Next = list;
}
static void MakeEmpty(List Bucket[], int BucketSize)
{
    int i;
    List Tmp;

    for (i = 0; i < BucketSize; i++)
    {
        while(Bucket[i] != NULL)
        {
            Tmp = Bucket[i];
            Bucket[i] = Bucket[i]->Next;
            free(Tmp);
        }
    }
}

static List MakeNewNode()
{
    List list;

    list = (List)malloc(sizeof(Node));
    return list;
}

static void ZerolizeBucket(List Bucket[], int Number)
{
    int i;

    for(i = 0; i < Number; i ++)
    {
        Bucket[i]->Next = NULL;
        Bucket[i]->Number = 0;
    }
}