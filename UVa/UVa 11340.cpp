#include <cstdio>
#include <iostream>

using namespace std;

struct words
{
    char w;
    int price;       
};

int main()
{ 
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
      int x;
      scanf("%d",&x);
      
      words query[x];
      char c;
      int a;
      for(int i = 0; i < x; i++){
         scanf(" %c %d",&c,&a);
         query[i].w = c;
         query[i].price = a;        
      }
      
      
      double sum = 0;
      
      int paper;
      scanf("%d",&paper);
      
      string s;
      getchar();
      
      for(int i = 0; i < paper; i++){
            getline(cin,s);
            
            for(int j = 0; j < x; j++){
                for(int k = 0; k < s.length(); k++){
                    if(query[j].w == s[k])sum += query[j].price;        
                }        
            }
            
      }
      
      printf("%.2lf$\n",sum / 100);
     
      
   }
   return 0;    
}
