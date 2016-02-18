#include <cstdio>
#include <iostream>

using namespace std;

int main()
{   
   int t,k = 1;
   while(scanf("%d",&t) != 0)
   {
      if(t == 0)break;
      
      int x,c1 = 0,c2 = 0;
      for(int i = 0; i < t; i++){
         scanf("%d",&x);
         
         if(x > 0)c1++;
         else
           c2++;        
      }         
      
      printf("Case %d: %d\n",k,c1-c2);
      
      k++;    
   }
   return 0;    
}
