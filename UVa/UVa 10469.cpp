#include <cstdio>
#include <iostream>

using namespace std;

int main()
{  
   int a,b,ans;
   while(scanf("%d %d",&a,&b) != EOF)
   {
       ans = a ^ b;
       printf("%d\n",ans);     
   }
   return 0;    
}
