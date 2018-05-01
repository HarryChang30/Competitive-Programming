#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	int n;
	scanf("%d",&n);
	
	ll arr[n];
	for(int i = 0; i < n; i++)
		scanf("%lld",&arr[i]);
		
	ll minimumValue = 100000000009;
	
	//O(N + log N ) solution
	
	sort(arr,arr+n);
	for(int i = 0; i < n-1; i++){
		
		ll difference = abs(arr[i] - arr[i+1]);
		if(difference < minimumValue)
			minimumValue = difference;
	}
	
	
	
//  O(N^2) Solution
//	for(int i = 0; i < n; i++){
//		for(int j = i+1; j < n; j++){
//			
//			ll difference = abs(arr[i] - arr[j]);
//			if(difference < minimumValue)
//				minimumValue = difference;
//			
//		}
//	}
	
	printf("%lld\n",minimumValue);
	
	return 0;
}
