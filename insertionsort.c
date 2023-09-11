#include<stdio.h> 
void accept(int a[],int n)
{
    int i;
    printf("enter n number"); 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
    } 
}

void display(int a[],int n)
{   
      int i;
      printf("sorted number="); 
      for(i=0;i<n;i++) 
          printf("%d \n",a[i]);
}

void insertion(int a[100],int n) 
 { 
   int i,j,t,num; 
   for(i=0;i<n;i++) 
   { 
       num=a[i]; 
       for(j=i-1;j>=0&&num<=a[j];j--) 
       { 
            t=a[j+1]; 
            a[j+1]=a[j]; 
            a[j]=t; 
       } 
   }
 }
 
 int main() 
 { 
    int a[100],i,n; 
    void insertion(int a[100],int n); 
    printf("enter limit"); 
    scanf("%d",&n); 
    accept(a,n);
    insertion(a,n); 
    display(a,n);
 }