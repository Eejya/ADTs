
/*
        DESCRIPTION:Single linked List implementation
        AUTHOR:Eejya Singh
        EMAIL:singh.eejya@gmail.com
        VERSION:1.0
*/
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
void list_push(lnodeptr * l,int x)
{  

  lnodeptr temp2=*l;
  
  lnodeptr temp=(lnode *)malloc(sizeof(lnode));
   
  temp->elem=x;
  temp->nextptr=NULL;
     
  if(temp2!=NULL)
  {
      //printf("\n the value is not equal to null");
      while(temp2->nextptr!=NULL)
      {
        temp2=temp2->nextptr;

      }   
      temp2->nextptr=temp;
   }
  else if(temp2==NULL)
  {  //printf("The value is null");
      h=temp;
     *l=temp;
      
  }
}

void list_pop(lnodeptr *l)
{
    int i;
    lnodeptr tmp=*l;
    if(list_length(l)==1)
    {
      //printf("the length of list is 1");
      free(tmp);
      *l = NULL;
    }
    else{
    while((tmp->nextptr)->nextptr!=NULL)
      {
        tmp=tmp->nextptr;
      }
      free(tmp->nextptr);
      tmp->nextptr=NULL;
     
    
}

    
}
int list_length(lnodeptr * l)
{
  
  int i=1;
  
 // lnodeptr temp=h;
  lnodeptr l2= *l;
  if(l2==NULL)
  {
    printf("\nThe list is null");
    return 0;

  }
  else
  {
    while(l2->nextptr!=NULL)
    {
      l2=l2->nextptr;
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
int list_search(lnodeptr *l,int element)
{

  lnodeptr temp=*l;
  int i=0;
  int flag=-1;
  while(temp!=NULL)
  {  
    
      if(temp->elem==element)
      {
          flag=i+1;
          break;
      }
      else
      {
        
        flag=-1;
      }
  temp=temp->nextptr;
  i++;
  }
return flag;
}
void list_deleteMiddle(lnodeptr *l,int pos)
{
  lnodeptr temp=*l;
  int i;
  for(i=0;i<pos-2;i++)
  {
    temp=temp->nextptr;
  }
  lnodeptr node=temp->nextptr;
  temp->nextptr=((temp->nextptr)->nextptr);
  free(node);

}



