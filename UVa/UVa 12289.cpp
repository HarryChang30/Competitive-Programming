#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
       string s;
       cin >> s;
       
       if(s.length() == 5)printf("%d\n",3);
       else
       {
           int ctr = 0;
           for(int i = 0; i < s.length(); i++){
              if(s[i] == 'o' || s[i] == 'n' || s[i] == 'e')ctr++;  
           }    
           
           if(ctr >= 2)printf("%d\n",1);
           else
              printf("%d\n",2);
       }          
    }
   return 0;    
}
