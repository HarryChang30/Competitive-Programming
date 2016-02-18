#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int t;
   scanf("%d",&t);
   
   while(t)
   {
      int x , sum = 0,a = 1;
      
      while(scanf("%d",&x) != 0)
      {
         sum +=  (double)2 * pow((double)x,(double)a++);

         if(x == 0)
         {
             break;
             t--;     
         }                     
      }
      
      printf("%d\n",sum);
   }
   return 0;    
}
