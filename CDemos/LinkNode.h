//
//  LinkNode.h
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#ifndef LinkNode_h
#define LinkNode_h

#include <stdio.h>

typedef struct LinkNode{
    int data;
    struct LinkNode * next;
} LinkNode;

LinkNode * createList(int arr[], int size);
LinkNode * reverseList(LinkNode * list);
LinkNode * reverseListRecursive(LinkNode * list);
void sortList(LinkNode * list);
int getData(LinkNode * list, int index);

#endif /* LinkNode_h */
