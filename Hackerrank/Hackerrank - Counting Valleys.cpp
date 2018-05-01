#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	char str[n];
	for(int i = 0; i < n; i++)
		scanf(" %c",&str[i]);
	
	int countValey = 0;
	int countMountain = 0;
	int seaLevel = 1;
	int hikePosition = 1;
		
	for(int i = 0; i < n; i++){
		if(str[i] == 'D')
			hikePosition -= 1;
		else if(str[i] == 'U'){
			hikePosition += 1;
			
			if(hikePosition == seaLevel)
				countValey += 1;
		}
	}
	
	printf("%d\n",countValey);
	
	return 0;
}
