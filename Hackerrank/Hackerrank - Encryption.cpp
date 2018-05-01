#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string s; 
	cin >> s;
	
	int len = s.length();
	int row = floor(sqrt(len));
	int column = ceil(sqrt(len));
	

	if(row * column < len){
		
		if(row < column)
			row = column;
		else 
			column = row;
		
	}
	
	char encryption[row][column];
	int count = 0;
	
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < column; j++){
			
			encryption[i][j] = s[count];
			count += 1;
			
		}
		
	}
	
	
	for(int i = 0; i < column; i++){

		
		for(int j = 0; j < row; j++){
			
			if(encryption[j][i] != '\0')
				printf("%c", encryption[j][i]);
		}
		
			printf(" ");
	}
	
	return 0;
}
