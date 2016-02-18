#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main()
{ 
    int t;
    scanf("%d",&t);
    
    getchar();
    while(t--)
    {
       string s;
       getline(cin,s);
       

       if(s == "1" || s == "4" || s == "78")printf("+\n");
       else if(s[s.length()-1] == '5' && s[s.length()-2] == '3')printf("-\n");
       else if(s[0] == '1' && s[1] == '9' && s[2] == '0')printf("?\n");
       else 
         printf("*\n");
       
    }
   return 0;    
}
