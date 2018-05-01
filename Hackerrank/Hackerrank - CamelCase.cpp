#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string s;
	cin >> s;
	
	int camel = 1;
	
	for(int i = 0; i < s.length() - 1; i++){
		if(islower(s[i]) == 0 && isupper(s[i+1]) == 0){
			camel += 1;
		}
	}
	
	
	cout << camel << endl;
	
	return 0;
}
