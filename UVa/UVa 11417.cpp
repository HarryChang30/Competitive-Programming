#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int gcd(int b, int a)
{
   if(a == 0)return b;
   return gcd(a,b%a);
}

int main()
{
   int tc;
   while(scanf("%d",&tc) != 0)
   {
      int i,j;
       if(tc == 0)break;
       int G = 0;       
     G=0;
    for(i=1;i<tc;i++)
    for(j=i+1;j<=tc;j++)
    {
     G+=gcd(i,j);
    }
                
                
       printf("%d\n",G);      
   }
   return 0;    
}
