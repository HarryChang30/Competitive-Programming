#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int p,n,i,j;
int dp[500][10005];
//int visited[500][10005];

void knapsack(int S , int N , int pt[] , int fn[])
{
   //int i,j;
   
   for(i = 0; i <= N; i++)
   {
      for(j = 0; j <= S; j++)
      {
          if(i == 0 || j == 0)dp[i][j] = 0;
          else if(pt[i-1] <= j){
               dp[i][j] = max(fn[i-1] + dp[i-1][j-pt[i-1]],dp[i-1][j]);    
               
               //if(dp[i][j] != dp[i-1][j]) visited[i][j] = 1;
          } 
          else
              dp[i][j] = dp[i-1][j];
      }      
   }
   
   int best = dp[n][p];
   for(i=p;i;i--)
   {
      //printf("%d %d\n",i,dp[N][i]);
      if(dp[N][i] < best)break;              
   }
}



int main()
{
   while(scanf("%d %d",&p,&n))
   {
      if(p == 0 && n == 0)break;
      memset(dp,0,sizeof(dp));
      //memset(visited,0,sizeof(visited));
      //memset(mark,0,sizeof(mark));
      
      int pt[n] , fn[n];
      for(int i = 0; i < n; i++)
         scanf("%d %d",&pt[i],&fn[i]);
      
      knapsack(p,n,pt,fn);
      //sumparty(n,p,pt);
      printf("%d %d\n",i+1,dp[n][p]);
   }
   return 0;    
}
