// Q2. Write a program that sorts the elements of linked list using any of sorting technique

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
       int data;
       struct node *next;
}NODE;

NODE* create(NODE *head)
{
      int n,i;
      NODE *newnode,*temp;
      
      printf("\n Enter Limit :: ");
      scanf("%d",&n);
      
      for(i=-0;i<n;i++)
      {
              newnode=(NODE *)malloc(sizeof(NODE));
              printf("Enter Value :: ");
              scanf("%d",&newnode->data);
              
              newnode->next=NULL;
              
              if(head==NULL)
              {
                         head=newnode;
                         temp=newnode;              
              }
              else
              {
                          temp->next=newnode;
                          temp=newnode;
              }
      }
      return head;
}

void display(NODE *head)
{
        NODE *temp;
        
        for(temp=head;temp!=NULL;temp=temp->next)
        {
                printf("%d\t",temp->data);
        }
}


NODE *Bubblesort(NODE *head)
{
      NODE *temp1,*temp;
      int t;
       for(temp1=head;temp1!=NULL;temp1=temp1->next)
       {
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                        if((temp->data)>(temp->next->data))
                        {
                                t=temp->data;
                                temp->data=temp->next->data;
                                temp->next->data=t;
                        }
                }
       }
        return head;
}

int main()
{
          NODE *head=NULL;
          head=create(head);
          display(head);
          printf("\nSorted Elements= \n\n");
          head=Bubblesort(head);
          display(head);
}
