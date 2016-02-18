#include <cstdio>
#include <iostream>

using namespace std;

int main()
{   
   int t;
   while(scanf("%d",&t) != EOF)
   {
       int tea[5];
       int ctr = 0;
       for(int i = 0; i < 5; i++){
          scanf("%d",&tea[i]);
          
          if(tea[i] == t)ctr++;        
       }
       
       printf("%d\n",ctr);
   }
   return 0;    
}
