#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>

using namespace std;

int main()
{  
   int t,k=1,ans,temp,a,b,i,j,x;
   scanf("%d",&t);
   int route[20005];
   while(t--)
   {                    
      scanf("%d",&x);
      for(int i = 1; i <= x-1; i++)scanf("%d",&route[i]);
      
      temp = 0;
      j = 1;
      ans = 0;
      for(i = 1; i <= x-1; i++)
      {
          temp += route[i];
          if(temp < 0){
              j = i+1;
              temp = 0;        
          }else if(temp > ans || (temp == ans && (a - b < i - j)))
          {
              ans = temp;
              b = j;
              a = i;      
          }
          
      }
      
      if(ans > 0)printf("The nicest part of route %d is between stops %d and %d\n",k,b,a+1);
      else
         printf("Route %d has no nice parts\n",k);
         
      k++;
   }
   return 0;    
}
