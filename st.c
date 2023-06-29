#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, f = 0;
    char city[30][30], search[30];

    printf("Enter the number of city: ");
    scanf("%d", &n);
    printf("\nEnter the names of city: \n");
    for(i=0; i<n; i++)
    {
        scanf("%s", city[i]);
    }
  printf("Enter the city for search: ");
    scanf("%s", search);
    for(i=0; i<n; i++)
    {
        if(strcmp(city[i], search)==0)
        {
            printf("%s is found in position %d\n", search, i+1);
            f= 1;
            break;
        }
    }

    if(f== 0)
    {
        printf("%s not found\n", search);
    }

    return 0;
}
