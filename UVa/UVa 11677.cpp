#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{  
    int h1,m1,h2,m2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2))
    {
     
     if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)break;
          int h = h2-h1;
          int m = m2-m1;
          
          if(m < 0){
              m += 60;
              h -= 1;     
          }
          if(h < 0)
             h += 24;
          
          
       
          
          printf("%d\n",h * 60 + m);
    }
   return 0;    
}
