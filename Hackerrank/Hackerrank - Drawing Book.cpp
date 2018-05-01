#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n,p,startResult,endResult;
	scanf("%d",&n);
	scanf("%d",&p);
	
	
	startResult = p/2;
	endResult = (n/2) - (p/2);
	
	cout << min(startResult,endResult) << endl;
				
	return 0;
}
