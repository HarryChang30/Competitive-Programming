#include <cstdio>

using namespace std;

int main()
{   
    int t,k = 1;
    scanf("%d",&t);
    
    while(t--)
    {
        int a,b,sum = 0;
        scanf("%d",&a);
        scanf("%d",&b);
        
        for(int i = a; i <= b; i++){
            if((i & 1) == 1)sum += i;
        }
        
        printf("Case %d: %d\n",k,sum);       
        k++;             
    }
    
    return 0;    
}
