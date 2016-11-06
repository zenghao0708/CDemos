//
//  SearchAlgorithm.c
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "SearchAlgorithm.h"
#include "Common.h"

// 二分查找
int binarySearch(int a[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int middle = (low + high) / 2;
        if (a[middle] == target) {
            return middle;
        }else if (a[middle] > target) {
            high = middle - 1;
        }else {
            low = middle + 1;
        }
    }
    
    return -1;
}
