/*************************************************
Copyright:mengyusheng
Author:
Date:2018-01-27
Description:数组
**************************************************/

#ifndef DATA_STRUCTURE_CHAPTER3_H
#define DATA_STRUCTURE_CHAPTER3_H
#define MaxN 100
struct ElemType {
};
ElemType LTA[MaxN];

void store(ElemType A[][MaxN], int n);

///稀疏矩阵转置
/// \param TA 转置前的稀疏矩阵
/// \param TB 转置后的稀疏矩阵
void TRANS(ElemType TA[][3], ElemType TB[][3]);

#endif //DATA_STRUCTURE_CHAPTER3_H
