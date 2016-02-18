#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{  
    int x,y;
    while(scanf("%d %d",&x,&y))
    {
       if(x == 0 && y == 0)break;
       
       int ctr = 0;
       for(int i = x; i <= y; i++)
       {
            int c = sqrt(i);
            if(c * c == i)ctr++;      
       }
                       
       printf("%d\n",ctr);
    }
   return 0;    
}
