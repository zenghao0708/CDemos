//
//  LinkNode.c
//  CDemos
//
//  Created by zenghao on 2016/11/6.
//  Copyright © 2016年 zenghao0708. All rights reserved.
//

#include "LinkNode.h"
#include <stdio.h>
#include <stdlib.h>


LinkNode * createList(int arr[], int size) {
    LinkNode * head = NULL;
    
    for (int i = 0; i < size; i++) {
        LinkNode * node = (LinkNode *)malloc(sizeof(LinkNode));
        node->data = arr[i];
        node->next = head;
        head = node;
    }
    return head;
}

LinkNode * reverseList(LinkNode * list) {
    LinkNode * prev = NULL;
    LinkNode * cur = list;
    LinkNode * next = cur->next;
    
    while (next != NULL) {
        cur->next = prev;
        prev = cur;
        cur = next;
        next = next->next;
    }
    cur->next = prev;
    
    return cur;
}


LinkNode * reverseListRecursive(LinkNode * head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    LinkNode * next = head->next;
    LinkNode * newList = reverseListRecursive(next);
    next->next = head;
    head->next = NULL;
    
    return newList;
}

void sortList(LinkNode * list){
    
}

int getData(LinkNode * list, int index) {
    return -1;
}
