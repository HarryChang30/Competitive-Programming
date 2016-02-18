#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{  
   int t;
   while(scanf("%d",&t) != 0)
   {
      if(t == 0)break;
      
      getchar();
      char s[1000];
      gets(s);  
      
      int x = strlen(s) , split;
      split = x / t;
      
      int a;
      for(int i = 1; i <= t; i++)
      {
            a = i * split;
            for(int j = a - 1; j >= a-split; j--){
                printf("%c",s[j]);        
            }      
      }            
      printf("\n");   
   }
   return 0;    
}
