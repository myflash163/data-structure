/*************************************************
Copyright:mengyusheng
Author:
Date:2018-01-27
Description:线性表
**************************************************/

#ifndef DATA_STRUCTURE_CHAPTER2_H
#define DATA_STRUCTURE_CHAPTER2_H

struct ElemType {

};
int n; //线性表长度
#define MaxSize 1000

/// 插入线性链表元素
/// \param A 线性链表
/// \param n 线性表长度
/// \param i 插入第几个 元素
void INSERTLIST(ElemType A[], int &n, int i, ElemType item);

/// 删除线性链表元素
/// \param A 线性链表
/// \param n 线性表长度
/// \param i 删除第几个 元素
void DELETELIST(ElemType A[], int &n, int i);

int LOCATE(ElemType A[], int n, ElemType item);

/// 删除链表中重复出现的元素
/// \param A
/// \param n
void PURGE(ElemType A[], int &n);

#endif //DATA_STRUCTURE_CHAPTER2_H
