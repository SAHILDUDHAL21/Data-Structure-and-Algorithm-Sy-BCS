#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
       int data;
       struct node *next;
};

struct node* create(struct node *head)
{
      int n,i;
      struct node *newnode,*temp;
      
      printf("\n Enter Limit :: ");
      scanf("%d",&n);
      
      for(i=-0;i<n;i++)
      {
              newnode=(struct node *)malloc(sizeof(struct node));
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

void display(struct node *head)
{
        struct node *temp;
        
        for(temp=head;temp!=NULL;temp=temp->next)
        {
                printf("%d\t",temp->data);
        }
}

struct node * insertbeg(struct node *head,int num)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));

    newnode->data=num;
    newnode->next=head;
    head=newnode;
    return head;
}

struct node * insertend(struct node *head,int num)
{
    struct node *newnode,*temp;
    newnode=(struct  node *)malloc(sizeof(struct node));

    newnode->data=num;
    newnode->next=NULL;

    for(temp=head;temp->next!=NULL;temp=temp->next);

    temp->next=newnode;
    return head;

}

int main()
{
    struct node *head=NULL;
    int ch,num;
    do{
        printf("\n 1: CREATE \n 2: DISPLAY \n 3: INSERT BEGINING \n 4: INSERT END \n");
        printf("\n Enter Choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 : head=create(head);
            break;
        case 2  : display(head);
            break;
        case 3  : printf("\n Enter Number To Insert :: ");
                  scanf("%d",&num);
                  head=insertbeg(head,num);
            break;
        case 4  :   printf("\n Enter Number To Insert :: ");
                    scanf("%d",&num);
                    head=insertend(head,num);        
        default:    printf("\n Invalid Choice.....");
            break;
        }
    }while(ch<5);
    

 
}













