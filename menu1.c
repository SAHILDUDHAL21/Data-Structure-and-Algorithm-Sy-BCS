#include<stdio.h>

int main()
{
  int a[100],n,i,ch;
  void insertion(int a[100],int n);
  void bubble(int a[100],int n);
  void linear(int a[100],int n,int num);
  void binary(int a[100],int n,int num);

  printf("enter limit:-");
  scanf("%d",&n);
  printf("enter n numbers in an array:-");
  for(i=0; i<n; i++)
  {
     scanf("%d",&a[i]);
  }
  do
 {
  printf(" \n 1- sort insertion \n 2- sort bubble \n ");
  printf("3-sort selection \n 4-linear search \n 5- binary search \n enter your choice :-");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:insertion(a,n);
     break;
    case 2:bubble(a,n);
    break;
      case 3:printf(" enter limit :: ");
                     scanf("%d",&num);
      linear(a,n,num);
    break;
    default:printf("invalid choice....");
  }
  }while(ch<3);

  return 0;
 }
 void insertion( int a[100], int n)
 {
  int i,j,num;
   for(i=1; i<n; i++)
   {
      num=a[i];
      for(j=i-1; j>=0&&num<a[j]; j--)
      {
  a[j+1]=a[j];
  a[j]=num;
      }

   }
   printf("\n sorted array=");
   for(i=0; i<n; i++)
    {
     printf("%d\t",a[i]);
    }
 }
 void bubble(int a[100],int n)
 {
   int i,j,t;
   for(i=1; i<n; i++)
   {
    for(j=0; j<n-i; j++)
    {
       if(a[i]>a[i+1])
       {
  t=a[i];
  a[i]=a[i+1];
  a[i+1]=t;
       }
    }

   }
   printf("\n bubble sorted=");
   for(i=0; i<n; i++)
   {
    printf("%d\t",a[i]);
   }
 }
