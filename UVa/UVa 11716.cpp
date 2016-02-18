#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main()
{  
   int t;
   scanf("%d",&t);
   
   getchar();
   while(t--)
   {
       char s[10005];
       gets(s);
       
       int x = sqrt(strlen(s));
       
       if(x * x == strlen(s)){
           char result[x][x];
           
           int a = 0;
           
           for(int i = 0; i < x; i++){
              for(int j = 0; j < x; j++){
                   result[i][j] = s[a];
                   a++;        
              }        
           }    
           
           for(int i = 0; i < x; i++){
              for(int j = 0; j < x; j++){
                      printf("%c",result[j][i]);     
              }        
           }
           printf("\n");
            
       }else{
          printf("INVALID\n");      
       }
       
   }
   return 0;    
}
