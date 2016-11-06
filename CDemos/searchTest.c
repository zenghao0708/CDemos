//
//  searchTest.c
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "searchTest.h"
#include "SearchAlgorithm.h"
#include "sortAlgorithm.h"
#include "Common.h"

#include <assert.h>

void testQuickSearchSucced() {
    int arr[] = {20, 4, 5, 60, 0 , 3};
    quickSort(arr, 0, SIZE(arr) -1);
    assert(binarySearch(arr, SIZE(arr), 0) == 0);
    assert(binarySearch(arr, SIZE(arr), 3) == 1);
    assert(binarySearch(arr, SIZE(arr), 4) == 2);
    assert(binarySearch(arr, SIZE(arr), 5) == 3);
    assert(binarySearch(arr, SIZE(arr), 20) == 4);
    assert(binarySearch(arr, SIZE(arr), 60) == 5);
    TESTSUCCEED()
}


void testQuickSearchFailed() {
    int arr[] = {20, 4, 5, 60, 0 , 3};
    quickSort(arr, 0, SIZE(arr) -1);
    assert(binarySearch(arr, SIZE(arr), -1) == -1);
    assert(binarySearch(arr, SIZE(arr), 10) == -1);
    assert(binarySearch(arr, SIZE(arr), 61) == -1);
    
    TESTSUCCEED()
}

void testSearchAlgorithms() {
    testQuickSearchSucced();
    testQuickSearchFailed();
}
