#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

bool compare(string x,string y)
{
   string a = x+y;
   string b = y+x;
   return a > b;     
}

int main()
{
    while(!cin.eof())
    {
       int n;
       cin >> n;
       
       if(n == 0)break;
       
       string s[n];
       for(int i = 0; i < n; i++)cin >> s[i];
       sort(s,s+n,compare);
       for(int i = 0; i < n; i++)cout << s[i];
       cout << endl;
                        
    }
    
    return 0;   
}
