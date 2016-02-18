#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string s;
    int k = 1;
    while(cin >> s)
    {
       if(s[0] == '*')break;
       if(s == "Hajj")
            cout << "Case " << k << ": "<< "Hajj-e-Akbar" << endl;
       else
            cout << "Case " << k << ": "<< "Hajj-e-Asghar" << endl;
           
           
       k++;
    }
    
    return 0;    
}
