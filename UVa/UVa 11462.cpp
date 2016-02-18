#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{  
    long long t;
    while(scanf("%lld",&t) != 0)
    {                      
       if(t == 0)break;
       long long s[t];
       for(int i = 0; i < t; i++)scanf("%lld",&s[i]);
       sort(s,s+t);
       
       char str[3] = " ";
       for(int i = 0; i < t; i++){
          printf("%lld",s[i]);
          if(i == t-1)break;
          printf("%s",str);        
       }                    
       printf("\n");   
    }
   return 0;    
}
