#include<stdio.h>
int n,a[20];
void mergesort(int low,int mid,int high)
{
   int i,j,k,t[20];
   i=low;
   j=mid+1;
   k=low;
   while(i<=mid&&j<=high)
   {
      if(a[i]<a[j])
        t[k++]=a[i++];
      else
        t[k++]=a[j++];
   }
   while(i<=mid)
      t[k++]=a[i++];
   while(j<=high)
      t[k++]=a[j++];
      
  for(i=low;i<=high;i++)
    a[i]=t[i];
}
void msortdiv(int low,int high)
{
   int mid;
   if(low!=high)
   {
      mid=(low+high)/2;
      msortdiv(low,mid);
      msortdiv(mid+1,high);
      mergesort(low,mid,high);
   }
}
int main()
{
  int i;
  printf("Enter limit:");
  scanf("%d",&n);
  printf("Enter n numbers:");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   msortdiv(0,n-1);
  
  printf("\n Sorted nos=");
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}