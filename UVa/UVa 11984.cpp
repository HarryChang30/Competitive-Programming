#include <cstdio>
#include <cmath>

using namespace std;

int main()
{   
    int t,k = 1;
    scanf("%d",&t); 
    
    while(t--)
    {
        float C,d,F;
        scanf("%f %f",&C,&d);  
        
        F = ((9 * C) / 5) + 32;
        F += d;
        C = ((F - 32) * 5) / 9;
        
        printf("Case %d: %.2f\n",k,C);
        k++;
    }
    
    return 0;    
}
