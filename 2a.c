#include<stdio.h>
void main()
{
int A[10];
int i,j,n,k,min_index,temp;
printf("Enter no. of elements: ");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<n-1;i++)
{
min_index=i;
for(j=i+1;j<n;j++)
{
if(A[min_index]>A[j])
{
min_index=j;
temp=A[i];
A[i]=A[j];
A[j]=temp;
}
}
}
printf("Sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
printf("Enter the K: ");
scanf("%d",&k);
printf("\n%d\n",A[k-1]);
}


/*	 ************************OUTPUT***************
Enter no. of elements: 5
Enter the elements:
-1 0 -3 10 -5
Sorted elements are:
-5
10
-3
0
-1
Enter the K: 3

-3
*/
