#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	int n,q;
	scanf("%d %d",&n,&q);
	
	vector<ll> sequence[n+1];
	ll lastAnswer = 0;
	for(int i = 0; i < q; i++){
		int t;
		ll x,y;
		
		scanf("%d %lld %lld",&t,&x,&y);
		
		if(t == 1){
			
			ll result = ((x ^ lastAnswer) % n);
			sequence[result].push_back(y);
			
		}else if(t == 2){
			
			ll result = ((x ^ lastAnswer) % n);
			lastAnswer = sequence[result].at(y % sequence[result].size());
			printf("%lld\n", lastAnswer);
		}
	}
	
	return 0;
}
