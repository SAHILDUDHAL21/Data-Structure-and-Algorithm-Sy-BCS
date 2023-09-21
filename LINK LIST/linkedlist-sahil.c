#include<stdio.h> 
 #include<stdlib.h> 
 #include<malloc.h> 
 # define memory (NODE *)malloc(sizeof(NODE));
  
typedef struct node
 { 
        int data; 
        struct node *next; 
 }NODE; 
  
 NODE *create(NODE *head) 
 { 
       int n,i; 
       NODE *newnode,*temp; 
  
       printf("\n Enter Limit :: "); 
       scanf("%d",&n); 
  
       for(i=0;i<n;i++) 
       { 
               newnode=memory;
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
  
 NODE *insertbeg(NODE *head,int num) 
 { 
     NODE *newnode; 
     newnode=memory; 
  
     newnode->data=num; 
     newnode->next=head; 
     head=newnode; 
     return head; 
 } 
  
 NODE *insertend(NODE *head,int num) 
 { 
     NODE *newnode,*temp; 
     newnode=memory; 
  
     newnode->data=num; 
     newnode->next=NULL; 
  
     for(temp=head;temp->next!=NULL;temp=temp->next); 
  
     temp->next=newnode; 
     return head; 
  
 } 
  
 NODE *insertmid(NODE *head,int num,int pos) 
 { 
     int i; 
     NODE *newnode,*temp; 
     newnode=memory; 
  
     newnode->data=num; 
  
     for(i=1,temp=head;i<=(pos)&&temp->next!=NULL;i++,temp=temp->next); 
  
     newnode->next=temp->next; 
     temp->next=newnode; 
     return head; 
 } 
  
 NODE *insertcom(NODE *head,int num,int pos) 
 { 
     NODE *newnode,*temp; 
     int i; 
  
     newnode=memory; 
  
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
 NODE *search(NODE *head,int num) 
 { 
     NODE *temp; 
  
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
     NODE *head=NULL; 
     int ch,num,pos; 
     do{ 
         printf("\n 1: CREATE \n 2: DISPLAY \n 3: INSERT BEGINING \n 4: INSERT END "); 
         printf("\n 5: INSERT MIDDLE \n 6: INSERT pos\n 7: SEARCH"); 
         
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
             case 7 : printf("\n Enter Number To Search :: ");
          	scanf("%d",&num);
          	 search(head,num);
      
      
         default:    printf("\n Invalid Choice....."); 
             break; 
         } 
     }while(ch<8); 
  
  
  
 }
