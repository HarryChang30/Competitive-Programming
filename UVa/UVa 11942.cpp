#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{   
   int t,p,c;
   scanf("%d",&t);  
   
   printf("Lumberjacks:\n");
   while(t--)
   {
       bool flag1,flag2;
       flag1 = flag2 = false;
       scanf("%d",&p);
       
       for(int i = 0; i < 9; i++){
          scanf("%d", &c);
          
          if(p < c)
             flag1 = true;
          else
             flag2 = true;
             
          p = c;        
       }
       
       if(flag1 && flag2)printf("Unordered\n");
       else printf("Ordered\n");
       
       
   }
   

   return 0;    
}
