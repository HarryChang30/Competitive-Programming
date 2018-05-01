#include <bits/stdc++.h>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom)
{	
	bool isRansom = true;
	map<string,int> ransomMap;	
	map<string,int> magazineMap;
	for(int i = 0; i < magazine.size(); i++)
		magazineMap[magazine[i]] = 0;
	
	for(int i = 0; i < magazine.size(); i++){
		ransomMap[magazine[i]] = 0;
		magazineMap[magazine[i]] += 1;
	}
	
	for(int i = 0; i < ransom.size(); i++){
		ransomMap[ransom[i]] += 1;			
	}
	
	for(int i = 0; i < ransom.size(); i++){
		if(magazineMap[ransom[i]] < ransomMap[ransom[i]])
			isRansom = false; 
	}
	
	return isRansom;
}

int main()
{	
	int m,n;
	scanf("%d %d",&m,&n);
	
	vector<string> magazine;
	vector<string> ransom;
	
	for(int i = 0; i < m; i++){
		string s;
		cin >> s;
		magazine.push_back(s);
	}
	
	for(int j = 0; j < n; j++){
		string s;
		cin >> s;
		ransom.push_back(s);
	}
	
	if(ransom_note(magazine,ransom))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}
