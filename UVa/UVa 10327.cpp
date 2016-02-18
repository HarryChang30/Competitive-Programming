#include <cstdio>
#include <iostream>

using namespace std;

void swaps(int *xp , int *yp)
{
   int temp = *xp;
   *xp = *yp;
   *yp = temp;     
}

int main()
{   
   int t;
   while(scanf("%d",&t) != EOF)
   {
      int s[t];
      for(int i = 0; i < t; i++)scanf("%d",&s[i]);
      
      
      int ctr = 0;
      for(int i = 0; i < t - 1; i++){
         for(int j = 0; j < t-i-1; j++)        
            if(s[j] > s[j+1]){
               swaps(&s[j],&s[j+1]);     
               ctr++;   
            }
      }    
      
      printf("Minimum exchange operations : %d\n",ctr);             
   }
   

   return 0;    
}
