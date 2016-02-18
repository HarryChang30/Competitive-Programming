#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{ 
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
      int x;
      scanf("%d",&x);
      
      int opt[x+1],pos = 0;
      string ins;
      getchar();
      for(int i = 1; i <= x; i++)
      {
         getline(cin,ins);
         if(ins == "LEFT"){
            opt[i] = -1;       
         }else if(ins == "RIGHT"){
            opt[i] = 1;      
         }else{
            string con;
            for(int i = 8; i < ins.length(); i++)
            {
                con += ins[i];       
            }
            int last = atoi(con.c_str());
            opt[i] = opt[last];     
         }
      }
      
	  for(int i = 1; i <= x; i++)pos += opt[i];
	
     printf("%d\n",pos);
   }
   return 0;    
}
