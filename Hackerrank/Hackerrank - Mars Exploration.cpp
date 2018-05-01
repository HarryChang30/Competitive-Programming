#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string s;
	cin >> s;
	
	int n = s.length();
	
	char sos[n];
	for(int i = 0; i < n; i += 3){
		sos[i] = 'S';
		sos[i+1] = 'O';
		sos[i+2] = 'S';
	}
	
	int ans = 0;
	
	for(int i = 0; i < n; i++){
		
		if(s[i] != sos[i])
			ans++;
	}
	
	cout << ans << endl;
	
	return 0;
}
