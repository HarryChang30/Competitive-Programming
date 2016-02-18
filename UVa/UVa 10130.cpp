#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int knapsack(int S , int N , int w[] , int p[])
{
    int i,j;
    int K[N+1][S+1];
    
    for(i = 0; i <= N; i++){
        for(j = 0; j <= S; j++){
           if(i == 0 || j == 0)K[i][j] = 0;
           else if(w[i-1] <= j)
              K[i][j] = max(p[i-1]+K[i-1][j - w[i-1]],K[i-1][j]);
           else
              K[i][j] = K[i-1][j]; 
        }      
    }    
    return K[N][S];
}

int main()
{  
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
       int x;
       scanf("%d",&x);
       
       int p[x] , w[x];
       for(int i = 0; i < x; i++)scanf("%d %d",&p[i],&w[i]);
       
       int y,mW,sum = 0;
       scanf("%d",&y);
       
       for(int i = 0; i < y; i++){
          scanf("%d",&mW);
          sum += knapsack(mW,x,w,p);        
       }
       
       printf("%d\n",sum);
   }
   return 0;    
}
