#include <cstdio>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{  
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
      int x,sum = 0,temp = 0 , difference = 0;
      scanf("%d",&x);
      
      int score[x];
      for(int i = 0; i < x ;i++)
         scanf("%d",&score[i]);

      
      difference = score[0] - score[1];
      sum = max(score[0],score[1]);
      for(int i = 2; i < x; i++)
      {
         temp = sum - score[i];
         difference = max(difference,temp);
         sum = max(sum,score[i]);
      }
      
      printf("%d\n",difference);
      
   }
   
   return 0;    
}
