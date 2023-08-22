//Write a program in C to print the first n natural numbers using recursion.
#include<stdio.h>

void print(int i, int n)
{
    if(i <= n)
    {
         printf(" %d ", i);
         print(i + 1, n);
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Natural Numbers up to %d:", n);
    print(1, n);

    return 0;
}