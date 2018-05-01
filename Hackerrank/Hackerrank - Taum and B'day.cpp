#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	int tc;
	scanf("%d",&tc);
	
	while(tc--){
		ll b,w;
		scanf("%lld %lld",&b,&w);
		
		ll x,y,z;
		scanf("%lld %lld %lld",&x,&y,&z);
		
		ll cost = 0;
        
        			
        if(x > z && y > z){

            if(y > x){
                cost = (x * b) + min((x + z) * w , y * w);
            }else{
                cost = min(((y + z) * b) , (x * b)) + (y * w);
            }

        }else if(x > z){
			cost = min(((y + z) * b) , (x * b)) + (y * w);
		}else if(y > z){
			cost = (x * b) + min((x + z) * w , y * w);
		}else{
			cost = (x * b) + (y * w);	
		}
		
		
		printf("%lld\n" , cost);
	}
	
	return 0;
}
