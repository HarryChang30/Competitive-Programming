#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

bool checkprime(long long x)
{
   long long i;
   if(x < 2)return false;
   if(x == 2)return true;
   for(i = 2; i < x; i++)
      if(x % i == 0)return false;
     
   return true;     
}


int main()
{ 
   long long n;
   while(scanf("%lld",&n) != EOF)
   {
       long long i ,j, k,l,ctr = 0;
       for(i = 1; i <= n; i++){
           if(checkprime(i))ctr++;
       }               
       
       long long storeprime[ctr];
       memset(storeprime,0,sizeof(storeprime));       
       
       int s = 0;
       for(i = 1; i <= n; i++)
       {
          if(checkprime(i)){
             storeprime[s] = i;
             s++;                  
          }   
       }
       
       for(i = 0; i < ctr; i++){
          for(j = i+1; j < ctr; j++){
             for(k = j+1; k < ctr; k++){
                for(l = k+1; l < ctr; l++){
                   cout << storeprime[i] << " " << storeprime[j] << " " << storeprime[k] << " " << storeprime[l] << endl;      
                }      
             }      
          }
       }
       
      
   }
   return 0;    
}
