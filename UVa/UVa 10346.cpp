#include <cstdio>
#include <iostream>

using namespace std;

int main()
{  
   int n,k,ans;
   while(scanf("%d %d",&n,&k) != EOF)
   {   
       
       ans = n;
       
       while(n >= k)
       {       
          ans = ans + (n/k);
          n = (n/k) + (n%k);
       }     
       
       printf("%d\n",ans);
   }
   return 0;    
}
