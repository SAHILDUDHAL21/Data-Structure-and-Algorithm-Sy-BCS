#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node* create(struct node *list)
 {
  struct node *temp,*newnode;
  int i,n;
  printf("enter limit:");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(list==NULL)
       {
       list=newnode;
       temp=newnode;
       }
     else
     {
    temp->next=newnode;
    temp=newnode;
     }

  }
  return list;
 }
 void disp(struct node *list)
 {
    struct node *temp;
    for(temp=list; temp!=NULL; temp=temp->next)
     {
       printf("%d\t",temp->data);
     }
 }
 int main()
 {
    struct node *list=NULL;
    int ch;
    clrscr();
    do{
    printf(" \n 1-create \n 2-display \n");
    printf("\n enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:list=create(list);
	      break;
     case 2:disp(list);
	  break;
    }
   }while(ch<3);

  getch();
  return 0;

 }