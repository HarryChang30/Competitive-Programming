#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{  
   int t,k=1;
   scanf("%d",&t);
   
   while(t--)
   {
       string s[10];
       int val[10];
       
       int ctr = 0,maks = -1;
       for(int i = 0; i < 10; i++){
           cin >> s[i] >> val[i];     
           
           if(val[i] > maks)
              maks = val[i];   
       }           
       
       printf("Case #%d:\n",k);
       for(int i = 0; i < 10; i++){
          if(maks == val[i])
             cout << s[i] << endl;    
       }
       

       
       k++;
   }
   return 0;    
}
