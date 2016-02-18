#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
   double h,u,d,f;
   while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f) != 0)
   {
      if(h == 0 && u == 0 && f == 0 && d == 0 || h == 0)break;
      
      double pos = 0,days = 0,fatigue = (f/100.00) * u;
      
      while(1)
      {       
              days++;
              if(u >= 0)pos += u;
              u -= fatigue;
              if(pos > h)break;
              pos -= d;
              if(pos < 0)break;
      }               
      
      if(pos > 0)printf("success on day %.0lf\n",days);
      else
        printf("failure on day %.0lf\n",days);
   }
   return 0;    
}
