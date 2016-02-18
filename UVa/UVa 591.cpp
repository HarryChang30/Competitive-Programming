#include <cstdio>

using namespace std;

int main()
{  
   int t,k = 1;
   while(scanf("%d",&t) != 0)
   {
      if(t == 0)break;
      int box[t],sum = 0;
      for(int i = 0; i < t; i++){
         scanf("%d",&box[i]);     
         sum += box[i];   
      }
                           
      int avg = sum / t , moves = 0;
      for(int i = 0; i < t; i++){
        if(box[i] > avg)moves += box[i] - avg;        
      }
      printf("Set #%d\n",k);
      printf("The minimum number of moves is %d.\n\n",moves);
      k++;
   }
   return 0;    
}
