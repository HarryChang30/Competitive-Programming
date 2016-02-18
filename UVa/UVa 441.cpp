#include <cstdio>
#include <iostream>

using namespace std;

int main()
{ 
   int t,ctr = 0;
   while(scanf("%d",&t) && t != 0)
   {
      if(t == 0)break;
      
      if(ctr != 0)printf("\n");
      
      ctr++;
      
      int s[t];
      for(int i = 0; i < t; i++)
         scanf("%d",&s[i]);
         
      for(int i = 0; i < t; i++){
         for(int j = i+1; j < t; j++){
            for(int k = j+1; k < t; k++){
               for(int l = k+1; l < t; l++){
                  for(int m = l+1; m < t; m++){
                     for(int n = m+1; n < t; n++){
                        printf("%d %d %d %d %d %d\n",s[i],s[j],s[k],s[l],s[m],s[n]);
                     }       
                  }        
               }        
            }       
         }       
      }
                           
   }
   return 0;    
}
