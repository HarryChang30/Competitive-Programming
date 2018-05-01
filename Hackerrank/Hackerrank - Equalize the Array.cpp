#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	sort(arr,arr+n);
	
	int isSame = 0;
	int Counter = 100000000;
	int tempCounter = 0;
	
	for(int i = 0; i < n-1; i++){
		if(arr[i] == arr[i+1]){
			isSame += 1;
		}else{
			isSame = 0;
		}
		
		if(isSame == 0){
			tempCounter = n - 1;
		}else{
			
			tempCounter = n - (isSame + 1);
			
			if(tempCounter < Counter)
				Counter = tempCounter;
			
		}
	}
	
	if(Counter == 100000000 && tempCounter == 0)
		Counter = 0;
	else if(Counter == 100000000 && tempCounter != 0)
		Counter = tempCounter;
	
	cout << Counter << endl;
	
	
	return 0;
}
