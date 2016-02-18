#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <string>

using namespace std;

int main()
{ 
   int n,k=1;
   scanf("%d",&n);  
   
   while(n--)
   {
      double money , sum = 0 , a = 12;
      while(a--)
      {
          scanf("%lf",&money);
          sum += money;         
      }     
      
      double avg = sum / 12;
      
      if(avg > 999.99)
         printf("%d $%ld,%.2lf\n",k,(long)(avg / 1000) , fmod(avg,1000));
      else
         printf("%d $%.2lf\n",k,avg);
      
      k++;
   }
   
   return 0;    
}
