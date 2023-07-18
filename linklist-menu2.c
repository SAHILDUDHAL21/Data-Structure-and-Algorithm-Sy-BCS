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

struct node* insertmid(struct node *head,int num,int pos)
{
    int i;
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));

    newnode->data=num;

    for(i=1,temp=head;i<=(pos)&&temp->next!=NULL;i++,temp=temp->next);

    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}

struct node * insertcom(struct node *head,int num,int pos)
{
    struct node *newnode,*temp;
    int i;

    newnode=(struct node *)malloc(sizeof(struct node));

    newnode->data=num;

    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    else
    {
        for(i=1,temp=head;i<(pos) && temp->next!=NULL;i++,temp=temp->next);

        newnode->next=temp->next;
        temp->next=newnode;
        return head;
    }
}

struct node* delbeg(struct node *head)
{
    struct node *temp;

    temp=head;
    head=head->next;
    free(temp);
    return head;
}

struct node* delend(struct node * head)
{
     struct node *temp,*temp1;

     for(temp=head;temp->next->next!=NULL;temp=temp->next);

     temp1=temp->next;
     temp->next=NULL;
     free(temp1);
     return head;
}

struct node* delmid(struct node * head,int pos)
{
    struct node *temp,*temp1;
    int i;

    for(i=1,temp=head;i<(pos-1)&& temp->next!=NULL;i++,temp=temp->next);

    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    return head;
}

struct node* delcom(struct node *head,int pos)
{
    struct node *temp,*temp1;
    int i;

    if(pos==1)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        for(i=1,temp=head;i<(pos-1)&& temp->next!=NULL;i++,temp=temp->next);

        temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);
    }
    return head;
}

struct node * search(struct node *head,int num)
{
    struct node *temp;
        
        for(temp=head;temp!=NULL;temp=temp->next)
        {
            if(temp->data==num)
            {
                return temp;
            }
        }
        return NULL;
}

int main()
{
    struct node *head=NULL;
    int ch,num,pos;
    do{
        printf("\n 1: CREATE \n 2: DISPLAY \n 3: INSERT BEGINING \n 4: INSERT END ");
        printf("\n 5: INSERT MIDDLE \n 6: INSERT COMMON \n 7: DELETE BEGINING \n 8: DELETE END");
        printf("\n 9: DELETE MIDDLE \n 10: DELETE COMMON \n 11: SEARCHING");
        printf("\n\n Enter Choice");
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
            break;        
        case 5  :   printf("\n Enter Number to insert::"); 
                    scanf("%d",&num); 
                    printf("\n Enter Postion to insert :: ");
                    scanf("%d",&pos);
                    head=insertmid(head,num,pos);
            break;        
        case 6  :   printf("\n Enter Number to insert :: ");
                    scanf("%d",&num);
                    printf("\n Enter Position to insert :: ");
                    scanf("%d",&pos);
                    head=insertcom(head,num,pos);
            break;
        case 7  :   head=delbeg(head);
            break;
        case 8  :   head=delend(head);
            break;
        case 9  :   printf("\n Enter Position to delete :: ");
                    scanf("%d",&pos);
                    head=delmid(head,pos);
            break;
        case 10  :  printf("\n Enter Position to delete :: ");
                    scanf("%d",&pos);
                    head=delcom(head,pos);
            break;
        case 11  :  printf("Enter Number to Search ::");
                    scanf("%d",&num);
                    if(search(head,num)==NULL)
                        printf("\n Record Not Found......");
                    else
                        printf("Record Found.....");
            break;      
        default:    printf("\n Invalid Choice.....");
            break;
        }
    }while(ch<12);
    

 
}

