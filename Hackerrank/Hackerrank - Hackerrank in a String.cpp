#include <bits/stdc++.h>

using namespace std;

string isContains(string str1){
	
	string str2 = "hackerrank";
	if(str1.length() < str2.length()){
		return "NO";
	}
	
	int j = 0;
	for(int i = 0; i < str1.length() && j < str2.length(); i++){
		if (str1[i] == str2[j]) {
            j++;
        }
	}
	
	return (j == str2.length() ? "YES" : "NO");
}
	
int main()
{	
	int tc;
	scanf("%d",&tc);
	
	while(tc--){
		
		string str1;
		cin >> str1;
		
		cout << isContains(str1) << endl;
	}
	
	return 0;
}
