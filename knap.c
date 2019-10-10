#include<stdio.h>
 
int max(int a, int b) 
{ 
   if(a > b)
      return a;
   else
      return b;  
}
 
int knapSack(int W, int wt[], int val[], int n)
{
   int i, j;
   int V[n+1][W+1];
 
   for(i = 0; i <= n; i++)
   {
       for(j = 0; j <= W; j++)
       {
           if(i==0 || j==0)
               V[i][j] = 0;
           else if(wt[i-1] <= j)
                 V[i][j] = max(val[i-1] + V[i-1][j-wt[i-1]],  V[i-1][j]);
           else
                 V[i][j] = V[i-1][j];
           printf("%d ", V[i][j]);
       }
       printf("\n");
   }
 
   return V[n][W];
}
 
int main()
{
    int i, n, val[20], wt[20], W;
    
    printf("Enter number of items:");
    scanf("%d", &n);
    
    printf("Enter weight and value of items : \n");
    for(i = 0;i < n; ++i)
    {
    	scanf("%d %d", &wt[i], &val[i]);
    }
 
    printf("\nEnter size of knapsack:");
    scanf("%d", &W);
    
    printf("The highest capacity of the knapsack is %d \n", knapSack(W, wt, val, n));
    return 0;
}
