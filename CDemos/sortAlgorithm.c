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
void directInsert(int arr[],int size)
{
    int j, temp;
    for(int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while(arr[j] > temp)    // 比较和移位
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}


// 选择排序：每一次循环，选择出最小的元素放在前排
void chooseSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr+i, arr+j);
            }
        }
    }
}


// 冒泡排序：
void bubblingSort(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        for ( int j = 1; j < size - i; j++) {
            if (arr[j - 1] > arr[j]) {
                swap(&arr[j], &arr[j - 1]);
            }
        }
    }
}

// 快速排序
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int t = arr[low];
        int l = low, h = high;
        while(l < h) {
            while( arr[h] > t && l < h) { // 从右向左找第一个小于x的数  
                h--;
            }
            if(l < h) {
                arr[l++] = arr[h];
            }
            
            while( arr[l] < t && l < h) { // 从左向右找第一个大于等于x的数
                l++;
            }
            
            if(l < h) {
                arr[h--] = arr[l];
            }
        }
        arr[l] = t;
        
        quickSort(arr, low, l-1);
        quickSort(arr, l+1, high);
    }
}
