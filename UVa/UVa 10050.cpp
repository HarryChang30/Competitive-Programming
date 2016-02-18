#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{  
   int t;
   scanf("%d",&t); 
   
   while(t--)
   {
       int x;
       scanf("%d",&x);  
       
       int days[x+1];
       memset(days,0,sizeof(days));
       int p;
       scanf("%d",&p);             
       
       int ps;
       for(int i = 0; i < p; i++)
       {
           scanf("%d",&ps);
           
           for(int j = ps; j <= x; j += ps)
           {
              days[j]++;
           }
       }     
       
       
       
       int ctr = 1 , so = 0;
       
       while(ctr <= x)
       {        

           if(ctr == 6 + (so * 7) || ctr == 7 + (so * 7)){
               //cout << ctr << endl;
               if(days[ctr] > 0){
                   days[ctr] = 0;            
               }
           }
           if(ctr % 7 == 0)so++;          
           ctr++;
       }
       
       int hartals = 0 , sisa = 0;
       for(int i = 1; i <= x; i++)
       {
          if(days[i] > 0)hartals++;
       }
       
       printf("%d\n",hartals);
   }
   

   return 0;    
}
