#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
   int t,k= 1;
   scanf("%d",&t);
   
   while(t--)
   {
      int x,maks = 0;
      scanf("%d",&x);
      
      int y[x];
      for(int i = 0; i < x; i++){
         scanf("%d",&y[i]);       
      }          
      sort(y,y+x);
      
      printf("Case %d: %d\n",k,y[x-1]);
      k++;
   }
   return 0;    
}
