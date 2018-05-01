#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	ll arr[5];
	for(int i =0; i < 5; i++){
		scanf("%lld",&arr[i]);
	}
	
	ll maxValue = -9999999999 , minValue = 9999999999;
	ll sum = 0;

	for(int i = 0; i < 5; i++){
		sum += arr[i];
	}
	
	for(int i = 0; i < 5; i++){
		ll temp = sum;
		temp = temp - arr[i];
		
		if(temp > maxValue)
			maxValue = temp;
		
		if(temp < minValue)
			minValue = temp;
	}
	
	cout << minValue << " " << maxValue << endl;
	
	return 0;
}
