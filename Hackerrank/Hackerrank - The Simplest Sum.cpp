#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//int sumResult(int k, int n)
//{
//	int sum = 0;
//		
//	for(int i = 1; i <= n; i += 1){
//		cout << sum << " " << i << endl;
//		sum += i;
//		i *= k;
//	}
//	
//	return sum;
//}

int logBase(int base, int x)
{
	return (int)(log(x) / log(base));
}

bool isPower(ll x, ll y)
{
	ll res1 = log(y) / log(x);
	double res2 = log(y) / log(x);
	
	return (res1 == res2);
}

ll sumResult(ll k, ll n)
{
	//return pow(k , logBase(k, (n/k) + 1) + 1) - 1;	
	if(n <= k)
		return 1;
	else if(isPower(k , (n * (k -1)) + 1) == 1)
		return n + sumResult(k,n-1);
	else
		return sumResult(k,n-1);
}

int main()
{			
	int q;
	scanf("%d",&q);
	
	for(int i = 0; i < q; i++){
		ll k;
		scanf("%lld", &k);
		
		ll a,b;
		scanf("%lld %lld",&a,&b);
		
		ll result = 0;
		ll j;
		for(j = a; j <= b; j++){
			result += sumResult(k,j);
		}
		
		
		printf("%lld\n",result % 1000000007);
	}
	
	return 0;
}
