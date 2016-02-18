#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main()
{
   int t,k = 1;
   scanf("%d",&t);
   
   while(t--)
   {
      ll pay,totaltax = 0;
      scanf("%lld",&pay);
      
      double tax = 0;
      
      if(pay <= 180000)tax = 0;
      else if(pay > 180000 && pay <= 480000){
          tax = (pay-180000) * 0.1;     
      }else if(pay > 480000 && pay <= 880000){
          tax = (pay - 480000) * 0.15 + 30000;      
      }else if(pay > 880000 && pay <= 1180000){
          tax = (pay - 880000) * 0.20 + 90000;    
      }else if(pay > 1180000){
          tax = (pay - 1180000) * 0.25 + 150000;    
      }
      
      if(tax > 0 && tax < 2000)tax = 2000;
      
            
      totaltax += ceil(tax);
      
      printf("Case %d: %lld\n",k,totaltax);
      
      k++;
   }
   return 0;    
}
