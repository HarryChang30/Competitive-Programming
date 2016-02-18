#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{   
   int t;
   while(scanf("%d",&t) != 0)
   {
       if(t == 0)break;
       int dist[t];
       for(int i = 0; i < t; i++)scanf("%d",&dist[i]);
       sort(dist,dist+t);
       
       bool flag = true;
       for(int i = 0; i < t-1; i++){
           if(dist[i] - dist[i-1] > 200)
           {
               flag = false;
               break;           
           }        
       }
       
       if(2 *  (1422 - dist[t-1]) > 200)flag = false;
       
       if(flag)printf("POSSIBLE\n");
       else printf("IMPOSSIBLE\n");
       
          
   }
   return 0;    
}
