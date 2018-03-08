//
//  BTree.h
//  CDemos
//
//  Created by zenghao on 2016/11/28.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#ifndef BTree_h
#define BTree_h

#include <stdio.h>

typedef struct BTree {
    int value;
    struct BTree * lNode;
    struct BTree * rNode;
} * BTree;


BTree * createBTree(int arr[], int size);
int findMinValue(BTree * root);

#endif /* BTree_h */
