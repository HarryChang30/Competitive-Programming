#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double a,b,c,s,r;
   while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
   {
        s = (a+b+c) / 2.0;    
        r = sqrt(s * (s-a) * (s-b) * (s-c) ) / s;
        
        if(isnan(r))
           r = 0;
        
        printf("The radius of the round table is: %.3lf\n",r);                
   }
   
   return 0;    
}
