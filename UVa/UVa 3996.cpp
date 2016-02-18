#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

long long digs[10];

int main()
{  
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        long long  x,y,d,a = 1;
        scanf("%lld",&x);
        
        memset(digs,0,sizeof(digs));
        
        
        while(a <= x)
        {
        
            y = a;        
            while(y > 0)
            {
                 d = y % 10;
                 digs[d]++;
                 y /= 10;
            }
            
            a++;
        }
        

        char str[3] = " ";
        for(int i = 0; i < 10; i++){
           printf("%lld",digs[i]);    
           if(i == 9)break;
           printf("%s",str);
        }
        printf("\n");
        
    }
    
   return 0;    
}
