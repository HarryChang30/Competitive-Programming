#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

char dest[10005];

bool ispalin(char s[] , int a , int b)
{
   while(a <= b)
   {
       if(s[a] != s[b])return false;
       a++ , b--;        
   }     
   return true;
}

void reverse(char s[],char dest[])
{
    int len = strlen(s);
    for(int i = 0 , j = len-1; i < len , j >= 0; i++ , j--)
            dest[i] = s[j];
            
    dest[len] = '\0';
}

int main()
{
   char s[] = "madam";
   reverse(s,dest);
   printf("%s\n",dest);
   
   if(s == dest)printf("palin\n");
   else printf("not palin\n");
   
   getchar();
   return 0;    
}
