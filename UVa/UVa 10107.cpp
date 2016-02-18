#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{  
 
   long long arr[100005],k = 0,x,ans;
   while(scanf("%lld",&x)!= EOF)
   {                    
       arr[k] = x;
       sort(arr,arr+k+1);
       
       if(k % 2 == 0)printf("%lld\n",arr[k/2]);
       else{
           ans = arr[k/2] + arr[(k/2)+1];
           printf("%lld\n",ans/2);
       }
       
       k++;
   }
   return 0;    
}
