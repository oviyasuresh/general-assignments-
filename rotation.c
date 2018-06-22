#include <stdio.h>

int main(void) 
{
	int n,d,i=0;
	scanf("%d %d",&n,&d);
	int a[n],temp[d];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<d;i++)
	{
		temp[i]=a[i];
	}
	for(i=d;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<d;i++)
	{
		printf("%d ",temp[i]);
	}
	
	return 0;
}
