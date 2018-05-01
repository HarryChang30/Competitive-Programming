#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	int up[205];
	memset(up,0,sizeof(up));
	
	int counter = 0;
	while(n--){
		int x;
		scanf("%d",&x);
		
		if(x >= 90){
			up[counter] = x;
			
			counter += 1;
		}
	}
	
	float result = 0;
	for(int i = 0; i < counter; i++){
		result += up[i];
	}
	
	float finalResult = result / counter;
	float nearest = (finalResult * 100) / 100;

	printf("%.2f\n",nearest);
	
	return 0;
}
