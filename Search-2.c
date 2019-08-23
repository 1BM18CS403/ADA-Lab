#include<stdio.h>
int main()
{
	int i,j,n,testcase,key,temp=-1;
	int arr[10];
	printf("enter the number of testcases");
	scanf("%d",&testcase);
	for(i=1;i<=testcase;i++)
	{

		printf("enter the size and key element");
		scanf("%d",&n);
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]==key)
			{
				
				temp=1;
			}
		}
		if(temp==1)
		{
			printf("1");
		}
		else
		{
			printf("-1");
		}
	}
}
				
	
	

