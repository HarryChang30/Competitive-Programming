#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
   double i,j,k,l;
   i = 0 , j = 0 , k = 0 , l = 0;
   
   while(i <= 20)
   {
      i += 0.01;
      j = i + 0.01;
      k = j + 0.01;
      l = k + 0.01;
      
      if(i + j + k + l == 20.00)printf("%.2lf %.2lf %.2lf %.2lf\n",i,j,k,l);     
   }
   
   
   getchar();
   return 0;    
}
