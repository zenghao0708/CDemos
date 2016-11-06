//
//  sortAlgorithm.c
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "sortAlgorithm.h"

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//直接插入排序： 把新元素插入到已经排好序的序列中
void directInsert(int A[],int N)
{
    int j, t;
    for(int i = 1; i < N;i++)
    {
        t=A[i];
        j=i-1;
        while(A[j] > t)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=t;
    }
}


// 选择排序：每一次循环，选择出最小的元素放在前排
void chooseSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr+i, arr+j);            }
        }
    }
}


// 冒泡排序：
void bubblingSort(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--) {
        for ( int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

