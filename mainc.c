#include <stdio.h>
#include "hashmap.h"
int main(void)
{
	lnodeptr array[10];
	
	int i;
	hashmap_initialize(array);
	
	printf("\narray is initialized");
	hashmap_add(array,15);
	hashmap_add(array,19);
	hashmap_add(array,29);
	hashmap_add(array,36);
	hashmap_add(array,52);
	hashmap_add(array,15);
	
	printf("\nthe length is %d",list_length(&array[9]));

	hashmap_delete(array,9);
	
	printf("\nthe length is %d",list_length(&array[9]));
	

	printf("\nthe length is %d",list_length(&array[5]));	
	for (i=0; i<10; i++)
	{

		if(array[i]!=NULL)
		{
			
			printf("\nThe value of elements is %d",array[i]->elem);
			
		}
	


	}
	int search_element=29;
	int result=hashmap_search(array,search_element);
	int key=hash(search_element);
	if(result==-1)
	{
		printf("\nThe search was unsuccessful");

	}
	else if(result>0)
	{
		printf("\nThe element is in the %d row and column %d \n",key,result);

	}
	
	hashmap_deleteAll(array);
		

}