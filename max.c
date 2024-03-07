#include<stdio.h>
int main()
{
	int i,n,max=0,x;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter a Element:");
		scanf("%d",&x);
		if(max<x)
		{
			max=x;
		}
		
		
	}
	printf("Maximum no is %d",max);
}
