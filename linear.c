#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    float per;
}s1[10];
int main()
{
    int i,n;
    char name1[20];
    printf("\nEnter Limit :: ");
    scanf("%d",&n);

    printf("\n Enter Rollno\tName\tPersentage of n Students\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%f",&s1[i].rollno,s1[i].name,&s1[i].per);
    }

    printf("\n Enter Name to Search :: ");
    scanf("%s",name1);

    for(i=0;i<n;i++)
    {
        if(strcmp(s1[i].name,name1)==0)
        {   
            printf("Roll no =%d\n Persentage =%f",s1[i].rollno,s1[i].per);
            break;
        }
    }
    
    if(i==n)
        printf("\n Record not found! ");
}
