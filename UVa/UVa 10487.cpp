#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#define INF 2147483647

int main()
{  
   int t,k=1;
   while(scanf("%d",&t) != 0)
   {
       if(t == 0)break;
       
       int sub[t];
       for(int i = 0; i < t; i++)scanf("%d",&sub[i]);
       sort(sub,sub+t);
       
       int x;
       scanf("%d",&x);
       
       printf("Case %d:\n",k);
       while(x--)
       {
          int sum,t1,t2,maks = INF;
          scanf("%d",&sum);
          

              for(int i = 0; i < t; i++){
                 for(int j = i+1; j < t; j++){
                        if(abs((sub[i] + sub[j]) - sum) < maks){
                           maks = abs((sub[i] + sub[j]) - sum);
                           t1 = sub[i];
                           t2 = sub[j];               
                        }       
                    } 
                 }        
              
             
          printf("Closest sum to %d is %d.\n",sum,t1+t2);
       }

       k++;
   }
   return 0;    
}
