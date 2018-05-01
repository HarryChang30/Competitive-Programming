#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int tc;
	scanf("%d",&tc);
	
	while(tc--){
		string a;
		cin >> a;
		
		int countDelete = 0;
		int len = a.length();
		for(int i = 1; i < len; i++)
			if(a[i] == a[i-1])
				countDelete += 1;
				
				
		cout << countDelete << endl;	
	}
	
	return 0;
}
