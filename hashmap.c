#include "hashmap.h"
#include "list.h"
#include <stdio.h>

int hash(int data)
{

	return data%10;
}

void hashmap_initialize(lnodeptr table[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		table[i]=NULL;
	}

}

void hashmap_add(lnodeptr table[10],int data)
{
	int key=hash(data);
	
	if(table[key]==NULL)
	{
		
		list_push(&table[key],data);

	}
	else
	{
		if(list_search(&table[key],data)==-1)
		{
			list_push(&table[key],data);	
		}
		else
		{
			return;
		}
		
	}
		

		
}

void hashmap_delete(lnodeptr table[10],int key)
{
	list_pop(&table[key]);	
	//int position=list_search(&table[key],data);
	//list_deleteMiddle(&table[key],position);
	

}
int hashmap_search(lnodeptr table[10],int data)
{
	int key=hash(data);
	
	int result=list_search(&table[key],data);
	return result;


}

void hashmap_deleteAll(lnodeptr table[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		if(table[i]!=NULL)
		{
			list_delete(&table[i]);

		}
	}
}