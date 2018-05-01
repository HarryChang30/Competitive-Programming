#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n,m;
	scanf("%d %d",&n,&m);
	
	char str[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf(" %c",&str[i][j]);
		}
	}
	
	//=====================
	//BRUTE FORCE SOLUTION
	//=====================
	
	int MAKS_TOPIK = -10000;
	int MAKS_TIM = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			
			int COUNTER_TOPIK = 0;
			for(int k = 0; k < m; k++){
				
				int TOPIK_1 = str[i][k] - '0';
				int TOPIK_2 = str[j][k] - '0';
				
				if(TOPIK_1 | TOPIK_2 == 1){
					COUNTER_TOPIK += 1;
				}
				
			}
						
			if(COUNTER_TOPIK > MAKS_TOPIK)
				MAKS_TOPIK = COUNTER_TOPIK;
			
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			
			int COUNTER_TOPIK_SECOND = 0;
			
			for(int k = 0; k < m; k++){
				
				int TOPIK_1_SECOND = str[i][k] - '0';
				int TOPIK_2_SECOND = str[j][k] - '0';
				
				if(TOPIK_1_SECOND | TOPIK_2_SECOND == 1){
					COUNTER_TOPIK_SECOND += 1;
				}
				
				if(COUNTER_TOPIK_SECOND == MAKS_TOPIK)
					MAKS_TIM += 1;
			}
			
		}
	}
	
	cout << MAKS_TOPIK << endl;
	cout << MAKS_TIM << endl;
	
	
	//====================
	//OPTIMIZE SOLUTION
	//====================
	
	return 0;
}
