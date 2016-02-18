#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{   
   char s[10005];
   
   while(gets(s))
   {
      for(int i = 0; i < strlen(s); i++)
         s[i] -= 7;
         
      printf("%s\n",s);
   }
   
   return 0;    
}
