#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{  
   string telp;
   
   while(getline(cin,telp))
   {
      for(int i = 0; i < telp.length(); i++)
      {
         if(telp[i] == 'A' || telp[i] == 'B' || telp[i] == 'C')telp[i] = '2';
         else if(telp[i] == 'D' || telp[i] == 'E' || telp[i] == 'F')telp[i] = '3';      
         else if(telp[i] == 'G' || telp[i] == 'H' || telp[i] == 'I')telp[i] = '4';   
         else if(telp[i] == 'J' || telp[i] == 'K' || telp[i] == 'L')telp[i] = '5';   
         else if(telp[i] == 'M' || telp[i] == 'N' || telp[i] == 'O')telp[i] = '6';   
         else if(telp[i] == 'P' || telp[i] == 'Q' || telp[i] == 'R' || telp[i] == 'S')telp[i] = '7';   
         else if(telp[i] == 'T' || telp[i] == 'U' || telp[i] == 'V')telp[i] = '8';   
         else if(telp[i] == 'W' || telp[i] == 'X' || telp[i] == 'Y' || telp[i] == 'Z')telp[i] = '9';   
      }          
      
      
      cout << telp << endl;
   }
   
   return 0;    
}
