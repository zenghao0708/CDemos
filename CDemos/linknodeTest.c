//
//  linknodeTest.c
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "linknodeTest.h"
#include "LinkNode.h"
#include "Common.h"
#include <assert.h>

void testCreateList() {
    int arr[] = { 1, 2, 3, 4, 5};
    LinkNode * list = createList(arr, SIZE(arr));
    assert(list->data == 5);
    
    TESTSUCCEED()
}

void testReverseList() {
    int arr[] = { 1, 2, 3, 4, 5};
    LinkNode * list = createList(arr, SIZE(arr));
    LinkNode * newList = reverseList(list);
    assert(1 == newList->data);
    
    TESTSUCCEED()
}

void testReverseListRecursive() {
    int arr[] = { 1, 2, 3, 4, 5};
    LinkNode * list = createList(arr, SIZE(arr));
    LinkNode * newList = reverseListRecursive(list);
    assert(1 == newList->data);
    
    TESTSUCCEED()
}


void testGetDataSucceed() {
    int arr[] = { 1, 2, 3, 4, 5};
    LinkNode * list = createList(arr, SIZE(arr));
    assert(5 == getData(list, 0));
    assert(4 == getData(list, 1));
    assert(3 == getData(list, 2));
    assert(2 == getData(list, 3));
    assert(1 == getData(list, 4));
    
    TESTSUCCEED()
}

void testGetDataFailed() {
    int arr[] = { 1, 2, 3, 4, 5};
    LinkNode * list = createList(arr, SIZE(arr));
    assert(-1 == getData(list, 6));
    assert(-1 == getData(list, -1));
    
    TESTSUCCEED()
}


void testLinkNodeAlgorithms() {
    testCreateList();
    testReverseList();
    testReverseListRecursive();
}
