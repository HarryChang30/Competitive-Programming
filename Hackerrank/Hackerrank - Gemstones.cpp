#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	int arr[26];
	int occur[26];
	int counter = 0;
	memset(occur,0,sizeof(occur));
	
	for(int i = 0; i < n; i++){
		
		memset(arr,0,sizeof(arr));
		string str;
		cin >> str;
		
		int len = str.length();
		for(int j = 0; j < len; j++){
			int a = str[j] - 97;
			arr[a] += 1;
		}
		
		for(int k = 0; k < 26; k++){
			if(arr[k] > 0){
				occur[k] = 1;
			}else{
				occur[k] = 0;
			}
		}
		
	}
	
	for(int l = 0; l < 26; l++){
		if(occur[l] == 1){
			counter += 1;
		}
	}
	
	
	cout << counter << endl;
	
	
	return 0;
}
