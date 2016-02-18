#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{   
   string s,con;
   while(getline(cin,s))
   {         
       long long ans = 0,res = 0,prev = -1;
       
       //bool check[6];
       //memset(check,0,sizeof(check));
       for(int i = 0; i < s.length(); i++)
       {
          if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V'){
               ans = 1; 
          }
          else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || 
               s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z')
          {
               ans = 2;
          }
          else if(s[i] == 'D' || s[i] == 'T'){
               ans = 3;
          }
          else if(s[i] == 'L'){
               ans = 4;
          }
          else if(s[i] == 'M' || s[i] == 'N'){
               ans = 5;
          }
          else if(s[i] == 'R'){
               ans = 6;
          }
          else
              ans = -1;
          
          //printf("%d\n",ans);
          
          if(ans != prev && ans != -1)cout << ans;
          prev = ans;
       }          
       cout << endl;
       
//       stringstream ss;
//       ss << ans;
//       con = ss.str();
//       
//       for(int i = 0; i < con.length(); i++)
//       {
//          if(con[i] == '0')con[i] = ' ';
//          else if(con[i] == con[i+1])con[i+1] = ' '; 
//       }
//       
//
//       for(int i = 0; i < con.length(); i++)
//       {
//          cout << con[i]; 
//       }
//       cout << endl;
      
      //cout << res << endl;

   }
   return 0;    
}
