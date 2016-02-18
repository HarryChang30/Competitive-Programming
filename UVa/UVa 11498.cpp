#include <cstdio>
#include <iostream>

using namespace std;

int main()
{  
   int t;
   while(scanf("%d",&t) != 0)
   {
      if(t == 0)break;
      
      int x,y;
      scanf("%d %d",&x,&y);
      
      int a,b;
      for(int i = 0; i < t; i++){
         scanf("%d %d",&a,&b);
         
         if(a == x || b == y)printf("divisa\n");
         else if(a > x && b > y)printf("NE\n");
         else if(a < x && b > y)printf("NO\n");
         else if(a > x && b < y)printf("SE\n");
         else 
            printf("SO\n");        
      }                     
   }
   
   return 0;    
}
