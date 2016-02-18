#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    int n,b,h,w;
    while(scanf("%d %d %d %d",&n,&b,&h,&w) != EOF)
    {               
        int p,bed,cost = b+100,mins = 1000000,temp;
        for(int i = 0; i < h; i++)
        {
            scanf("%d",&p);
            

            for(int j = 0; j < w; j++){
               scanf("%d",&bed);
               
               if(bed >= n)
               {
                  temp = p * n;
                  
                  if(cost > temp)
                     cost = temp;        
                      
               }
               
            }
            

        }                
        
        if(cost > b)printf("stay home\n");
        else 
           printf("%d\n",cost);
        

    }
   return 0;    
}
