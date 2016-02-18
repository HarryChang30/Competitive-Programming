#include <cstdio>
#include <cmath>

using namespace std;

int main()
{   
    int x,y,z;
    while(scanf("%d %d %d",&x,&y,&z) && x != 0 && y != 0 && z != 0)
    {    
         if((x * x) + (y * y) != (z * z) && (x * x) + (z * z) != (y * y) && (y*y) + (z*z) != (x*x))
               printf("wrong\n");
         else
               printf("right\n");                
    }
    
    return 0;    
}
