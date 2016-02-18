#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
   ll N,A;
   while(scanf("%lld %lld",&N,&A) != EOF)
   {
       ll sum = 0;
       for(int i = 1; i <= N; i++){
          sum += i * (pow((double)A,(double)i));        
       }                
       
       printf("%lld\n",sum);
   }
   return 0;    
}
