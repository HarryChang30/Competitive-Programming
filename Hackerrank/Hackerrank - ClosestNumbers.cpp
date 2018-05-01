#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	int n;
	scanf("%d", &n);
	
	ll arr[n];
	for(int i = 0; i < n; i++)
		scanf("%lld",&arr[i]);
	sort(arr,arr+n);	
	
	ll MINIMUM = 1000000009;
	for(int i = 0; i < n-1; i++)
		if(abs(arr[i] - arr[i+1]) <= MINIMUM){
			MINIMUM = abs(arr[i] - arr[i+1]);
		}
	
	for(int i = 0; i < n-1; i++){
		if(abs(arr[i] - arr[i+1]) == MINIMUM){
			printf("%lld %lld ",arr[i],arr[i+1]);
		}else{
			continue;
		}
	}
	
	return 0;
}
