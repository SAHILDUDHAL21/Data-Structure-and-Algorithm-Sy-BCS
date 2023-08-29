#include<stdio.h>

void accept(int a[],int n)
{
	int i;
	printf("\n Enter N numbers");
	    for(i=0;i<n;i++)
	    	scanf("%d",&a[i]);
}

void display(int a[],int n)
{
	int i;
	printf("\n N sorted numbers");
	    for(i=0;i<n;i++)
	    	printf("%d\t",a[i]);
}

void merge(int a[],int s,int mid,int e)
{
	int i,j,k,b[50];
	i=s;
	j=mid+1;
	k=0;
	
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	
	while(i<=mid)
		b[k++]=a[i++];
		
	while(j<=e)
		b[k++]=a[j++];
		
		
	for(i=s,k=0;i<=e;i++,k++)
		a[i]=b[k];	

}

void div(int a[],int s,int e)
{
	int mid;
	if(s!=e)
	{
		mid=(s+e)/2;
		div(a,s,mid);
		div(a,mid+1,e);
		merge(a,s,mid,e);
	}
}
int main()
{
	int n,a[50];
	printf("\n Enter limit");
	scanf("%d",&n);
	accept(a,n);
	div(a,0,n-1);
	display(a,n);
}