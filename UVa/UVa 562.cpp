#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int dp[25005],wt[105];


int knapsack(int S,int N)
{
    memset(dp,0,sizeof(dp));
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = S; j > 0; j--){
           if(wt[i] <= j)
             dp[j] = max(dp[j],wt[i] + dp[j - wt[i]]);        
        }        
    }
    return dp[S];
}

int main()
{
   int tc;
   scanf("%d",&tc);
   
   while(tc--)
   {
       memset(wt,0,sizeof(wt));
       int x;
       scanf("%d",&x);
       
       int sum = 0;
       for(int i = 1; i <= x; i++)
       {
          scanf("%d",&wt[i]);
          sum += wt[i];        
       }
       
       int ans = sum - (knapsack(sum/2,x) * 2);
       printf("%d\n",ans);
   }
    

   return 0;    
}
