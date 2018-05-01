#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	scanf("%d",&n);
	
	string s;
	cin >> s;
	
	int counter = 0;
	
	if(n < 6){		
		
		int constraintCounter = 0;
	
		bool isNumber = false;
		bool isUpper = false;
		bool isLower = false;
		bool isSpecial = false;
		
		for(int i = 0; i < s.length(); i++){
			if(isdigit(s[i])){
				isNumber = true;
				break;
			} 
		}
		
		for(int i = 0; i < s.length(); i++){
			if(isupper(s[i])){
				isUpper = true;
				break;
			}
		}
		
		for(int i = 0; i < s.length(); i++){
			if(islower(s[i])){
				isLower = true;
				break;
			}
		}
		

		string specialchars = "!@#$%^&*()-+";
		for(int i = 0; i < s.length(); i++){
			for(int j = 0; j < specialchars.length(); j++){
				if(s[i] == specialchars[j]){
					isSpecial = true;
					break;
				}
			}
		}
        

        		
        if(isSpecial == false)
            constraintCounter += 1;
        
        if(isUpper == false)
            constraintCounter += 1;
			
        if(isLower == false)
            constraintCounter += 1;
        
        if(isNumber == false)
            constraintCounter += 1;
        
		counter += (6 - n);
		
		cout << max(counter,constraintCounter) << endl;
		
	}else{
		
		bool isNumber = false;
		bool isUpper = false;
		bool isLower = false;
		bool isSpecial = false;
		
		for(int i = 0; i < s.length(); i++){
			if(isdigit(s[i])){
				isNumber = true;
				break;
			} 
		}
		
		for(int i = 0; i < s.length(); i++){
			if(isupper(s[i])){
				isUpper = true;
				break;
			}
		}
		
		for(int i = 0; i < s.length(); i++){
			if(islower(s[i])){
				isLower = true;
				break;
			}
		}
		

		string specialchars = "!@#$%^&*()-+";
		for(int i = 0; i < s.length(); i++){
			for(int j = 0; j < specialchars.length(); j++){
				if(s[i] == specialchars[j]){
					isSpecial = true;
					break;
				}
			}
		}
        

        		
        if(isSpecial == false)
            counter += 1;
        
        if(isUpper == false)
            counter += 1;
			
        if(isLower == false)
            counter += 1;
        
        if(isNumber == false)
            counter += 1;
        
		cout << counter << endl;
		
	}
	
	
	
	return 0;
}
