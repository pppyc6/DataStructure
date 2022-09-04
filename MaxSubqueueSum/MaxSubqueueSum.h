/* MaxSubqueueSum.h -- 四个算法计算最小序列和 */
#ifndef _MaxSubqueueSum_H_
#define _MaxSubqueueSum_H_

#include <stdbool.h>

//  操作:       插入值0~100数
//  前置条件:   将数组地址、大小传入函数
void GetRand(int a[], int n);

//  算法1(O(N^3))
//  操作:       找出最大序列和
int MaxSubqueueSum1(const int a[], int n);

//  算法2(O(N^2))
//  操作:       找出最大序列和
int MaxSubqueueSum2(const int a[], int n);

//  算法3(O(NlogN))
//  操作:       找出最大序列和
int MaxSubqueueSum3(const int a[], int n);

// 算法4(O(N))
int MaxSubqueueSum4(const int a[], int n);

#endif
