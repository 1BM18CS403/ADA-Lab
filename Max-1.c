#include<stdio.h>

int main()
{
	int n=0,i,max=0,arr[10];
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("maxixmum is %d",max);
	return 0;
}


