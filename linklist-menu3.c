#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"/home/sahil/User_Header_File/linklist.h"

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

