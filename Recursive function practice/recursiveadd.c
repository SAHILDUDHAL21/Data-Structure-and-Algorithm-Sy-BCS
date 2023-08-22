#include<stdio.h>
int sum(int n)
{
	if(n==0)
      return 0;
      
    return n+sum(n-1); 
}

int main()
{
	int n,a;
    printf("\n Enter Number");
    scanf("%d",&n);
    
    a=sum(n);
    printf("Addition=%d",a);
}