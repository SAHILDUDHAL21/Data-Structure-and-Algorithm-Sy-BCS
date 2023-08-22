//Write a program in C to print the first 50 natural numbers using recursion.
#include<stdio.h>
int print(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         print(n+1);
    }
}

int main()
{
    int n=1;
    printf("\n Natural Number up to 50");
    

    print(n);
}