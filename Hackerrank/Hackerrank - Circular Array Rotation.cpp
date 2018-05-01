#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n,k,q;
	scanf("%d %d %d",&n,&k,&q);
	
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
// 	Brute force solution
//	for(int i = 0; i < k; i++){
//		
//		int next = -1, prev = -1;
//		
//		for(int j = 0; j < n; j++){
//			
//			if(j == 0){
//				next = arr[j];
//				arr[j] = arr[n-1];
//			}else{
//				prev = arr[j];
//				arr[j] = next;
//				next = prev;
//			}
//			
//		}
//		
//	}
	
	int newArr[n * 2];
	int finalArr[n];

	if(k % n != 0){
		
		for(int i = 0; i < (n * 2); i++){
			
			if(i > (n-1)){
				newArr[i] = newArr[i - n];
			}else{
				newArr[i] = arr[i];
			}
			
		}
		
        int Start;
        int Temp;
        if(n > k){
            Start = n - k;
        }else if(k > n){
            Temp = k % n;
            Start = n - Temp;
        }
        
        for(int i = 0; i < n; i++){            
            finalArr[i] = newArr[Start];
            Start += 1;
        }

		
	}else{
		
		for(int i = 0; i < n; i++){
			
			finalArr[i] = arr[i];
			
		}
		
	}
	
	
	
	while(q--){
		
		int x;
		scanf("%d", &x);
		
		printf("%d\n",finalArr[x]);
		
	}
	
	return 0;
}
