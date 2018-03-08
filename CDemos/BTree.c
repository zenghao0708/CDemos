//
//  BTree.c
//  CDemos
//
//  Created by zenghao on 2016/11/28.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "BTree.h"
#include <stdlib.h>

BTree * createBTree(int arr[], int size) {
    BTree * node = (BTree *)malloc(sizeof(BTree));
    int level = 0;
    for (int i = 0; i < size; i++) {
        int value = arr[i];
        
    }
    
    return node;
}

int findMinValue(BTree * root) {
    return 0;
}
