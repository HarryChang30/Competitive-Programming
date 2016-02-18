#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{   
    int t;
    scanf("%d",&t); 
    
    while(t--)
    {
       long long  ans = 0;
       long long  x;
       scanf("%lld",&x);            
       
       long long a,b,c,i;
       for(i = 0; i < x; i++){
           scanf("%lld %lld %lld",&a,&b,&c);
           ans += (a * c);      
       }
       
       printf("%lld\n",ans);
    }
    

    return 0;    
}
