
/*
        DESCRIPTION:Single linked List implementation
        AUTHOR:Eejya Singh
        EMAIL:singh.eejya@gmail.com
        VERSION:1.0
*/
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
lnodeptr head;
void list_push(lnodeptr * l,int x)
{  

  lnodeptr temp2=*l;
  
  lnodeptr temp=(lnode *)malloc(sizeof(lnode));
   
  temp->elem=x;
  temp->nextptr=NULL;
     
  if(temp2!=NULL)
  {
      //printf("\n the value is not equal to null");
      temp2->nextptr=temp;
      
      *l=temp;       
      
   }
  else if(temp2==NULL)
  {  //printf("The value is null");
     head=temp;
     *l=temp;
      
  }
}

void list_pop(lnodeptr *l)
{
    int i;
    lnodeptr tmp=head;
    if(list_length(l)==1)
    {
      //printf("the length of list is 1");
      free(head);
      *l = NULL;
    }
    else{
    for(i=1;i<list_length(l)-1;i++)
      {

        tmp=tmp->nextptr;

      }
      free((*l));
      tmp->nextptr=NULL;
      *l=tmp;
    
}

    
}
int list_length(lnodeptr * l)
{
  
  int i=1;
  
  lnodeptr temp=head;
  lnodeptr l2= *l;
  if(l2==NULL)
  {
    printf("\nThe list is null");
    return 0;

  }
  else
  {
    while(temp->nextptr!=NULL)
    {
      temp=temp->nextptr;
      i++;
    }
    return i;
  }
}
void list_delete(lnodeptr *l)
{
  int i;
  int n=list_length(l);
  
  for(i=0;i<n;i++)
  {

    //printf("\n values of i are %d",i);
    list_pop(l);
    
  }



}
