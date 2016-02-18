#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

bool checksubstring(string x , string y)
{
    int index = 0;
    for(int i = 0; i < y.length(); i++){
        if(x[index] == y[i])index++;
        if(index == x.length())return true;       
    }     
    return false;
}


int main()
{  
   string a,b;
   while(cin >> a >> b)
   {
        if(a.length() > b.length())printf("No\n");           
        else
        {
            if(checksubstring(a,b) == true)printf("Yes\n");
            else printf("No\n");
        }
   }
   return 0;    
}
