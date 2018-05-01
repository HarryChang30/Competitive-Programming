#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	ll n,k;
	scanf("%lld %lld",&n,&k);
	
	ll arr[n];
	for(int i = 0; i < n; i++){
		scanf("%lld" , &arr[i]);	
	}
	sort(arr,arr+n);
	
	int counter = 0;
	
	int l = 0;
	int r = 0;
	while(l < n){
		
		if(arr[r] - arr[l] == k){
			l++;
			r++;
			counter++;
		}else if(arr[r] - arr[l] < k){
			r++;
		}else{
			l++;
		}
		
	}
	
	cout << counter << endl;
	
	return 0;
}	
