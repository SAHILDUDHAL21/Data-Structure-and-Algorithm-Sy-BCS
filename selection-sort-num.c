#include<stdio.h>
int main()
{
            int[20],i, n,j,k,index,min;
            
            printf("\n Enter Limit :: ");
            scanf("%d",&n);
            
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                
            for(i=0;i<n;i++)
            {
                  min = a[i];
                  for(j=0;j<n;j++)
                    {
                          if(a[j]<min)
                          {
                          min=a[j];
                          index=[j];
                          }
                    }
                    if(i!=index)
                    {
                    t=a[i];
                    a[i]=a[index];
                    a[index]=t;
                    }
            }
            for(i=0;i<n;i++)
            printf("%d \t",a[i]);
}
