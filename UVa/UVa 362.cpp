#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
   int byte,k = 1;
   while(scanf("%d",&byte) != 0)
   {
      if(byte == 0)break;
      
      int s = 0,t = 0,s1 = 0,tr;
      
      printf("Output for data set %d, %d bytes:\n",k,byte);
      while(byte > 0)
      {
          int file;
          scanf("%d",&file);
          
          if(file > 0)
          {
             s1 += file;
             byte -= file;      
          }
          
          
          t++;
          
          if(t % 5 == 0 && t > 0)
          {
              if(s1 > 0)
              {
                  printf("   Time remaining: %d seconds\n",(int)ceil(byte * 5.0 / s1));      
              }
              else
              {
                  printf("   Time remaining: stalled\n");    
              }
                 
              
              s1 = 0;
          }
                  
      }         
      printf("Total time: %d seconds\n\n",t);
      
      
      k++;
   }
   return 0;    
}
