#include "list.h"
#ifndef _HASHMAP_H
#define _HASHMAP_H
 


int  hash(int );
void hashmap_initialize(lnodeptr [10]);
void hashmap_add(lnodeptr[10],int );
void hashmap_delete(lnodeptr[10],int);
int hashmap_search(lnodeptr[10],int);
void hashmap_deleteAll(lnodeptr[10]);

#endif 