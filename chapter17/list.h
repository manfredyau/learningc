#ifndef LIST_H_

#define LIST_H_

#include <stdbool.h>

#define TSIZE 45
typedef struct film
{
    char title[TSIZE];
    int rating;
} Item;

typedef struct node
{
    Item item;
    struct node *next;
} Node;

typedef Node *List;

/* 函數原型 */

/* 操作：      初始化一個鏈表                                 */
/* 前提條件：    plist 指向一個鏈表                            */
/* 後置條件：    鏈表初始化為空                                 */
void InitializeList(List *plist);


/* 操作：      確定鏈表是否為空定義，plist指向一個已初始化的鏈表     */
/* 後置條件：    如果鏈表為空，該函數返回true，否則返回false      */
bool ListIsEmpty(const List *plist);

/* 操作：      確定鏈表是否已滿，plist指向一個已初始化的鏈表       */
/* 後置條作：    如果鏈表已滿，該函數返回真，否則返回假             */
bool ListIsFull(const List *plist);

/* 操作：      確定鏈表中的項數，plist指向一個已初始化的鏈表       */
/* 後置條件：   該函數返回鏈表中的項數                          */
unsigned int ListItemCount(const List *plist);

/* 操作：      在鏈表末尾添加項                                       */
/* 前提條件：   item是一個待添加至鏈表的項，plist指向一個已經初始化的鏈表   */
/* 後置條件：   如果可以，該函數在鏈表末尾添加一個項，且返回true；否則返回false*/
bool AddItem(Item item, List *plist);

/* 操作：    把函數作用於鏈表中的每一項                                         */
/*          plist指向一個已初始化的鏈表                                    */
/*          pfun指向一個函數，該函數接受一個Item類型的參數，且無返回值           */
/* 後置條件： pfun指向的函數作用於鏈表中的每一項一次                              */

void Traverse(const List *plist, void (*pfun)(Item item));

/* 操作：      釋放已分配的內存(如果有的話)                                                         */
/*            plist 指向一個已經初始化的鏈表                                                        */
/* 後置條件：    釋放了為鏈表分配的所有內存，鏈表設定為空                                                */
void EmptyTheList(List *plist);

#endif