#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string a,b;
	cin >> a;
	cin >> b;
	
	int lenA = a.length();
	int lenB = b.length();
	
	int x[26];
	int y[26];
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	
	int ans = 0;
	
	for(int i = 0; i < lenA; i++)
		x[a[i] - 97]++;
		
	for(int j = 0; j < lenB; j++)
		y[b[j] - 97]++;
		
	for(int k = 0; k < 26; k++)
		ans += abs(x[k] - y[k]);
			
	cout << ans << endl;
	
	
	return 0;
}
