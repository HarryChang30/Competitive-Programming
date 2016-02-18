#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{  
   int n,k = 1;
   while(scanf("%d",&n) != EOF)
   {
      int value[n];
      for(int i = 0; i < n; i++){
         scanf("%d",&value[i]);        
      }                    
      
      int maks = 1 , temp;
      
      for(int i = 0; i < n; i++){
          for(int j = i+1; j < n; j++){
              for(int k = j+1; k < n; k++){
                  printf("%d\n",value[i] * value[j] * value[k]);
              }        
          }        
      }
      
      
      
      printf("Case #%d: The maximum product is %d.\n",k,maks);
      k++;
   }
   return 0;    
}
