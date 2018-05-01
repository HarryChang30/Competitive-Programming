#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	int score[n];
	for(int i = 0; i < n; i++)scanf("%d",&score[i]);
	
	int ranked[n];
	ranked[0] = 1;
	for(int i = 1; i < n; i++){
		
		if(score[i] == score[i-1]){
			ranked[i] = ranked[i-1];
		}else{
			ranked[i] = ranked[i-1] + 1;
		}
		
	}

	int m;
	scanf("%d",&m);
	
	int alice[m];
	for(int i = 0; i < m; i++)scanf("%d",&alice[i]);
	
	int li = n-1;
	for(int i = 0; i < m; i++){
		
		int rankalice = -1;
		for(int j = li; j >= 0; j--){
			if(alice[i] >= score[j]){
				rankalice = ranked[j];
				li--;
			}else{
				break;
			}
		}
		
		if(rankalice == -1)
			rankalice = ranked[li] + 1;
			
		cout << rankalice << endl;
	}
		
//	for(int i = 0; i < m; i++){
//		
//		for(int j = 0; j < n; j++){
//			
//			if(alice[i] >= score[j]){
//				cout << ranked[j] << endl;
//				break;
//			}
//			
//			if(alice[i] < score[j] && j == n-1){
//				cout << ranked[n-1] + 1 << endl;
//				break;
//			}
//			
//		}
//	}	
	
	
	return 0;
}
