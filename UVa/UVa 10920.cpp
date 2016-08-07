#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main()
{  
   ll size,p;
   while(scanf("%lld %lld",&size,&p))
   {
       if(size == 0 && p == 0)break;
       
       ll x = (size+1)/2 , y = (size+1)/2;
       ll c = sqrt(static_cast<double>(p));
       
       if(!(c & 1))c--;
       
       x += (c-1)/2 , y += (c-1)/2;
       p -= c * c;
       
       if(p){
          c++;
          if(p <= c){
             x -= p - 1; y++;     
          }else if(p <= c * 2 ){
             x -= c - 1; y -= p - c - 1;      
          }else if(p <= c * 3){
             x -= c * 3 - p - 1; y -= c - 1;      
          }else{
             x++; y -= c * 4 - p - 1;      
          }
       }
       printf("Line = %lld, column = %lld.\n",y,x); 
   }
   return 0;    
}
