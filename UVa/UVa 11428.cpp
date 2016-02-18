#include <cstdio>
#include <iostream>

using namespace std;

int main()
{  
   int n;
   while(scanf("%d",&n) != 0)
   {
      if(n == 0)break;
      
      bool flag = false;
      int a = 0,b = 0;
      for(int i = 0; i <= n; i++){
         for(int j = i+1; j <= n; j++){
             if(j *j * j - i*i *i == n){
                a = j;
                b = i;
                flag = true;
                break;
             }
         }        
         if(flag)break;
      }              
      
      if(flag)printf("%d %d\n",a,b);
      else
         printf("No solution\n");
       
   }
   return 0;    
}
