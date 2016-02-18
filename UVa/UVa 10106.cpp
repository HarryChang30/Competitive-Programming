#include <cstdio>
#include <iostream>

using namespace std;

#define mods 1000000007



int main()
{ 
   long double x,y,ans;
   while(scanf("%llf",&x) != EOF)
   {
      scanf("%llf",&y);
      ans = x * y;
      printf("%.0llf\n",ans);                     
   }
   return 0;    
}
