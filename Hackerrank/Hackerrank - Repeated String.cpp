#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	string s;
	cin >> s;
	
	ll n;
	scanf("%lld",&n);
	
	ll ctrA = 0;
	ll len = s.length();
	for(int i = 0; i < len; i++)
		if(s[i] == 'a')ctrA += 1;
		
	ll resCountA = (n/len) * ctrA;
	ll modCountA = (n%len);
	
	ll ans = 0;
	
	for(int j = 0; j < modCountA; j++)
		if(s[j] == 'a')
			ans += 1;
			
	ans += resCountA;
	
	cout << ans << endl;
	
	return 0;
}
