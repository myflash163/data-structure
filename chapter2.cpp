#include <iostream>
#include "chapter2.h"

void INSERTLIST(ElemType A[], int &n, int i, ElemType item) {
    int j;
    if (n == MaxSize || i < 1 || i > n + 1) {
        std::cout << "error position";
    }
    for (j = n - 1; j >= i - 1; j--) {
        A[j + 1] = A[j];
    }
    A[i - 1] = item;
    n++;

}

//删除
void DELETELIST(ElemType A[], int &n, int i) {

}
