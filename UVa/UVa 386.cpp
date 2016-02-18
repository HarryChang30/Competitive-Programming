#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 
   int eq[205],sets = 10000;
   for(int i = 1; i <= 200; i++)eq[i] = i * i * i; 
   
   for(int i = 2; i <= 200; i++)
   {
      for(int j = 2; j <= i; j++){
         for(int k = j; k <= i; k++){
             for(int l = k; l <= i; l++){
                 if(eq[i] == pow((double)j,3) + pow((double)k,3) + pow((double)l,3))
                 {
                       printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);         
                 }        
             }        
         }        
      }        
   }

   //getchar();
   return 0;    
}
