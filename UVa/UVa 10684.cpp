#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{  
   int t;
   while(scanf("%d",&t) != 0)
   {
      if(t == 0)break;
      int streak[t];
      for(int i = 0; i < t; i++)scanf("%d",&streak[i]);
      
      int run = 0,ans = 0;
      for(int i = 0; i < t; i++)
      {
         if(run + streak[i] >= 0){
            run += streak[i];
            ans = max(ans,run);       
         }else
            run = 0;
      }             
      
      if(ans > 0)printf("The maximum winning streak is %d.\n",ans);
      else
         printf("Losing streak.\n");      
   }
   return 0;    
}
