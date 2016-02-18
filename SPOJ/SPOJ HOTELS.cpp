#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
   ll n,m,run=0,ans=0;
   cin >> n >> m;
   
   ll x[n];
   for(int i = 0; i < n; i++)cin >> x[i];
   //sort(x,x+n);
   
   //cin.clear(); cin.sync();
   
   for(int i = 0 , j = 0; i < n; i++)
   {
      run += x[i];
      while(run > m)
        run = run - x[j++];
        
      ans = max(ans,run);
   }
   
   cout << ans << endl;
   
   //cin.get();
   return 0;    
}
