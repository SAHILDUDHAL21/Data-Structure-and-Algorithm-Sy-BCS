#include<stdio.h>
int main()
{
        int a[100],i,n,num,flag=0;
        int search(int a[100],int num,int n);
      
        printf("enter limit:");
        scanf("%d",&n);
 
        printf("enter n number to shorted order:");
          for(i=0;i<n;i++)
        {
              scanf("%d",&a[i]);
        }
        
         printf("enter number to search:");
         scanf("%d",&num);
   
        flag=search(a,num,n);
          if (flag==1)
               printf("number is found");
        else
               printf("number is not found");
}

int search(int a[100],int num,int n)
{
    int top=0,bott=n-1, mid,flag=0;
    
    while(top<=bott)
    {
               mid=(top+bott)/2;
                 if(a[mid]==num)
                 {
                           flag=1;
                               break;
                }
                 if(num>a[mid]) 
                  top=mid+1;
                  else
                   bott=mid-1;
    }
                  return flag; 
}
