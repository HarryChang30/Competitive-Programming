#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
#include <math.h>

using namespace std;

double single(double x)
{
   return 1 + fmod((x-1),9);       
}

int main()
{
   char s1[10005] , s2[10005];
   
   double sum1,sum2;
   while(gets(s1))
   {
      sum1 = 0 , sum2 = 0;

      gets(s2);     
      
      for(int i = 0;  i < strlen(s1); i++)
      {
         if(s1[i] >= 97 && s1[i] <= 122)
            sum1 += s1[i] - 96;
         else if(s1[i] >= 65 && s1[i] <= 90)
             sum1 += s1[i] - 64;
         else
             sum1 += 0;        
      }    
      
      
      for(int j = 0; j < strlen(s2); j++)
      {
         if(s2[j] >= 97 && s2[j] <= 122)
             sum2 += s2[j] - 96;
         else if(s2[j] >= 65 && s2[j] <= 90)
             sum2 += s2[j] - 64;        
         else
             sum2 += 0;
      }
      
 
      double ans;
      
      if(single(sum2) > single(sum1))
         ans = single(sum1) / single(sum2);
      else
         ans = single(sum2) / single(sum1);
      
      if(isnan(ans))
        printf("\n");
      else{
         if(isinf(ans)){
             ans = 0;
             printf("%.2lf %%\n",ans * 100);               
         }else{
             printf("%.2lf %%\n",ans * 100);      
         }
      }
      
   }
   
   return 0;    
}
