#include <stdio.h>
#include "list.h"
int main(void)
{	
	lnodeptr l1 = NULL;
	int i;
	list_push(&l1,10);
	list_push(&l1,20);
	list_push(&l1,30);
	list_push(&l1,40);
	
	printf("\nThe element in the end is %d",l1->elem);
	printf("\nthe length of the list is %d",list_length(&l1));
	list_pop(&l1);
	printf("\nthe length of the list is %d",list_length(&l1));
	/*list_pop(&l1);
	list_pop(&l1);
	list_pop(&l1);
	*/
	list_delete(&l1);
	int n=list_length(&l1);

	printf("\nthe length of the list is %d\n",n);
	l1 = NULL;
	//printf("\nThe element in the end is %d",l1->elem);
	return 0;



}