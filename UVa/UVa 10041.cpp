#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{  
   int t;
   scanf("%d",&t); 
   
   while(t--)
   {
      int x;
      scanf("%d",&x);
      
      int s[x] , sum = 0;
      for(int i = 0; i < x; i++)scanf("%d",&s[i]);
      
      sort(s,s+x);
      
      int median = s[x/2];
      
      for(int i = 0; i < x; i++)
      {
          sum += abs(s[i] - median);        
      }
      
      printf("%d\n",sum);

   }
   
   return 0;    
}
