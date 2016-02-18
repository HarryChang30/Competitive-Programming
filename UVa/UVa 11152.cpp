#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265358979323846 

int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
    {
        double s = (a+b+c)/2.0;
        double L = sqrt(s*(s-a)*(s-b)*(s-c));
        
        double BigR = (a*b*c) / (4.0 * L);
        double smallR = L / s;
        
        double BigCircle = PI * BigR * BigR;
        double SmallCircle = PI * smallR * smallR;
        
        printf("%.4lf %.4lf %.4lf\n",BigCircle - L,L - SmallCircle,SmallCircle);    
    }
   return 0;    
}
