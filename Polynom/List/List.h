/* List.h -- 链式多项式 */
typedef struct node
{   
    int Power;
    int Number;
    struct polynum * Next;

} Node;
typedef Node * Ptrnode;
typedef Ptrnode Polynum;

// 创建一个新多项式
Polynum MakeNewPolynum();