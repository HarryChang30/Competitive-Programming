#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{  
   int t,k=1;
   scanf("%d",&t);
   
   while(t--)
   {
      int x;
      scanf("%d",&x);
      
      int ages[x+1];
      for(int i = 1; i<= x; i++)scanf("%d",&ages[i]);
      sort(ages+1,ages+1+x);
      
      if(x % 2 == 0)
          printf("Case %d: %d\n",k,ages[(x/2)+1]);
      else
          printf("Case %d: %d\n",k,ages[(x+1)/2]);
          
      k++;
   }
   return 0;    
}
