#include <cstdio>
#include <iostream>

using namespace std;

int main()
{   
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
       int x;
       scanf("%d",&x);
       
       double grades[x],total = 0,avg,ctr = 0;
       for(int i = 0; i < x; i++){
         scanf("%lf",&grades[i]);    
         total += grades[i];    
       }
       
       avg = total / x;
       for(int j = 0; j < x; j++){
          if(grades[j] > avg)ctr++;        
       }
       
       printf("%.3lf%%\n",(ctr / x) * 100);
                 
    }
   return 0;    
}
