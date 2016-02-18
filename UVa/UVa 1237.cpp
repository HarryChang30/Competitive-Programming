#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{ 
   int t,ctr = 0;
   scanf("%d",&t);  
   
   while(t--)
   {         
      if(ctr != 0)printf("\n");
             
      ctr++;
      
      long long d;
      scanf("%lld",&d);  
      
      string s[d];
      long long lowerbound[d] , upperbound[d] , value[d];
      memset(lowerbound,0,sizeof(lowerbound));
      memset(upperbound,0,sizeof(upperbound));
      memset(value,0,sizeof(value));
      for(int i = 0; i < d; i++)
      {
         cin >> s[i] >> lowerbound[i] >> upperbound[i];        
      }
     
      
      long long q;
      scanf("%lld",&q);
      
      long long x;
      while(q--)
      {
          scanf("%lld",&x);
          
          string temp = "";
          int ctr = 0;
          for(int i = 0; i < d; i++){
             if(x >= lowerbound[i] && x <= upperbound[i]){
                  temp = s[i];             
                  ctr++;
             }
          } 
          
          if(ctr > 1)
              cout << "UNDETERMINED";
          else{
              if(temp != ""){
                 cout << temp;
              }     
              else{
                 cout << "UNDETERMINED";    
              }
          }
          cout << endl;
      }
    
   }
   

   return 0;    
}
