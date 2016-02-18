#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{ 
   int t,k = 1;
   scanf("%d",&t);
   
   getchar();
   while(t--)
   {
      string s;
      getline(cin,s);
      
      int sum = 0;
      for(int i = 0; i < s.length(); i++)
      {
         if(s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm' || s[i] == 'p' || s[i] =='t' || s[i] == 'w' || s[i] == ' ')
             sum += 1;
         else if(s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 'u' || s[i] == 'x')
             sum += 2;
         else if(s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'v' || s[i] == 'y')
             sum += 3;
         else
             sum += 4;  
      } 
      
      
      printf("Case #%d: %d\n",k,sum);
      k++;
   }
   

   return 0;    
}
