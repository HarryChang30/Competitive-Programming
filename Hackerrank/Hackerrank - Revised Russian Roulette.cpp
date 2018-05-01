#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	int arr[n];
	int minimum = 0, maksimum = 0, autolocked = 0;
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
		if(arr[i] == 1)
			maksimum += 1;
	}
	
	
	
	for(int i = 0; i < n-1; i++){
		if(arr[i] == 1 && arr[i+1] == 1){
			arr[i] = 0;
            arr[i+1] = 0;
            autolocked += 1;
		}
	}
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            arr[i] = 0;
            minimum += 1;
        }
    }
    
    minimum = minimum + autolocked;
	
	if(minimum == 0)
		minimum = maksimum;
	
	printf("%d %d\n",minimum,maksimum);
	
	return 0;
}
