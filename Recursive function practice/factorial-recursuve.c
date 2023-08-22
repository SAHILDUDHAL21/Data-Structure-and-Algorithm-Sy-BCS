#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;

    return n*fact(n-1);
}

int main()
{
    int n,a;
    printf("\n Enter Number");
    scanf("%d",&n);

    a=fact(n);
    printf("factorial=%d",a);
}