#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int tc;
	scanf("%d",&tc);
	
	while(tc--)
	{
		int n;
		scanf("%d",&n);
		
		int arr[n];
		for(int i = 0; i < n; i++)
			scanf("%d",&arr[i]);
			
		int mid = 0;
		
		if(n % 2 != 0){
			mid = (n + 1) / 2;
		}else{
			mid = (n / 2) + 1;
		}	
		
		mid = mid - 1;
		
		int left = 0;
		int right = 0;
		
		for(int i = 0; i < mid; i++)
			left += arr[i];
		
		for(int j = mid+1; j < n; j++)
			right += arr[j];
		
		//cout << left << " " << right << endl;
		
		if(left != right)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}	
	
	
	return 0;
}
