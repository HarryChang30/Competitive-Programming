#include <cstdio>
#include <iostream>

using namespace std;

long long reverse(long long n)
{
   long long rev = 0;
   
   while(n > 0)
   {
      rev = rev * 10 + n % 10;
      n /= 10;        
   }
   
   return rev;
}


int main()
{   
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
       long long x,temps,sum = 0,prev,ctr = 0;
       scanf("%lld",&x);
       
       temps = reverse(x);
       while(x != temps)
       {
          x = (x + temps);
          temps = reverse(x);
          ctr++;
       }
       
       printf("%lld %lld\n",ctr,x);
       
    }
    
    return 0;    
}


