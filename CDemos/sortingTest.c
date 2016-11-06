//
//  sortingTest.c
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "sortingTest.h"
#include "sortAlgorithm.h"
#include <assert.h>
#include "Common.h"

void testDirectInsert()
{
    int arr[] = {0, 20, 35, 5, 7};
    int result[] = {0, 5, 7, 20, 35};
    directInsert(arr, SIZE(arr));
    for (int i = 0; i < SIZE(arr); i++) {
        printf("%d ", arr[i]);
    }
    assert(SIZE(arr) == SIZE(result));
    for (int i = 0; i < SIZE(result); i++) {
        assert(arr[i] == result[i]);
    }
    
    TESTSUCCEED()
}

void testBubblingSort() {
    int arr[] = {0, 20, 35, 5, 7};
    int result[] = {0, 5, 7, 20, 35};
    bubblingSort(arr, SIZE(arr));
    for (int i = 0; i < SIZE(arr); i++) {
        printf("%d ", arr[i]);
    }
    assert(SIZE(arr) == SIZE(result));
    for (int i = 0; i < SIZE(result); i++) {
        assert(arr[i] == result[i]);
    }
    
    TESTSUCCEED()
}

void testChooseSort() {
    int arr[] = {0, 20, 35, 5, 7};
    int result[] = {0, 5, 7, 20, 35};
    chooseSort(arr, SIZE(arr));
    for (int i = 0; i < SIZE(arr); i++) {
        printf("%d ", arr[i]);
    }
    assert(SIZE(arr) == SIZE(result));
    for (int i = 0; i < SIZE(result); i++) {
        assert(arr[i] == result[i]);
    }
    
    TESTSUCCEED()
}

void testQuickSort() {
    int arr[] = {0, 20, 35, 5, 7};
    int result[] = {0, 5, 7, 20, 35};
    quickSort(arr, 0, SIZE(arr) - 1);
    for (int i = 0; i < SIZE(arr); i++) {
        printf("%d ", arr[i]);
    }
    assert(SIZE(arr) == SIZE(result));
    for (int i = 0; i < SIZE(result); i++) {
        assert(arr[i] == result[i]);
    }
    
    TESTSUCCEED()
}

void testSortingAlgorithms()
{
    testDirectInsert();
    testBubblingSort();
    testChooseSort();
    testQuickSort();
}
