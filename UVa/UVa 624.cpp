#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int dp[100][10005];
int visited[100][10005];
int w[100];
int mark[100];

void print(int N,int V)
{
   for(int i= N; i > 0; i--)
   {
       if(visited[i][V])
       {
              mark[i] = 1;
              V = V - w[i];             
       }        
   }     
   
   for(int i = 1; i <= N; i++)if(mark[i])printf("%d ",w[i]);
}

int main()
{   
   int V,N;
   while(scanf("%d %d",&V,&N) != EOF)
   {               
       memset(dp,0,sizeof(dp));
       memset(visited,0,sizeof(visited));
       memset(w,0,sizeof(w));
       memset(mark,0,sizeof(mark));
       
       for(int i = 1; i <= N; i++)scanf("%d",&w[i]);
       
       for(int i = 0; i <= N; i++)
       {
           for(int j = 0; j <= V; j++)
           {
               if(i == 0 || j == 0){dp[i][j] = 0;continue;}
               if(w[i] <= j)
               {
                   dp[i][j] = max(w[i] + dp[i-1][j-w[i]] , dp[i-1][j]);
                   //visited[i][j] = 1;
                   if(dp[i][j] != dp[i-1][j])visited[i][j] = 1;
               }        
               else
               {
                   dp[i][j] = dp[i-1][j];   
                   //visited[i][j] = 0; 
               }
           }        
       }                
       
       
       
       print(N,V);
       printf("sum:%d\n",dp[N][V]);
   }
   return 0;    
}
