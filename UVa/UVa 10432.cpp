#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265358979323846

int main()
{
   double r,n;
   while(scanf("%lf %lf",&r,&n) != EOF)
   {
       double sudut = ((double) 360 / (double) n) * PI / 180;
       
       double ans = n * 0.5 * r * r * sin(sudut);
       printf("%.3lf\n",ans);              
   }
   return 0;    
}
