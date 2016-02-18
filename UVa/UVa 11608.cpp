#include <cstdio>
#include <iostream>

using namespace std;

int main()
{  
   int t,k=1;
   while(scanf("%d",&t))
   {
      if(t < 0)break;
      
      int r[12] , s[12];
      
      r[0] = t;
      for(int i = 0; i < 12; i++)scanf("%d",&r[i]);
      for(int j = 0; j < 12; j++)scanf("%d",&s[j]);
      
      printf("Case %d:\n",k);
      for(int i = 0; i < 12; ++i)
      {
          if(t >= s[i]){
             printf("No problem! :D\n");     
             t -= s[i];
          }else
             printf("No problem. :(\n");
             
          
          t += r[i];
      }
      
      k++;
   }
   return 0;    
}
