#include <cstdio>
#include <iostream>

using namespace std;

void swaps(int *a , int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;     
}

int main()
{  
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
       int x;
       scanf("%d",&x);
       
       int val[x];
       for(int i = 0; i < x; i++)scanf("%d",&val[i]);
       
       int ctr = 0;
       for(int i = 0; i < x-1; i++){
          for(int j = 0; j < x-i-1; j++){
             if(val[j] > val[j+1]){
                swaps(&val[j],&val[j+1]);
                ctr++;          
             }        
          }        
       }
       
       
       printf("Optimal train swapping takes %d swaps.\n",ctr);
   }
   return 0;    
}
