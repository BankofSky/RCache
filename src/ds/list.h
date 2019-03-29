#include<sds.h>

#ifndef __list_H__
#define __list_H__

typedef struct listNode {
    listNode *prev;
    listNode *next;
    sds *key;
    void *value;
}listNode;

typedef struct list {
    listNode *head;
    listNode *tail;
    int length;
};

list *createList();
list *insertNode(list *l, int position);
list *insertNodeNext(list *l, listNode *node);