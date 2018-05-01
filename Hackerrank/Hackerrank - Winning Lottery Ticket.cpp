#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

char *removeDuplicate(char *str)
{
	bool bin_hash[256] = {0};
	int ip_ind = 0, res_ind = 0;
	char temp;
	
	while (*(str + ip_ind))
	{
	    temp = *(str + ip_ind);
	    if (bin_hash[temp] == 0)
	    {
	        bin_hash[temp] = 1;
	        *(str + res_ind) = *(str + ip_ind);
	        res_ind++;
	    }
	    ip_ind++;
	}  
	
	*(str+res_ind) = '\0';
	return str;
}

int main()
{	
	int n;
	cin >> n;
	
	string tickets[n];
	for(int i = 0; i < n; i++)
		cin >> tickets[i];
	
	ll winningChance = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			
			
			if(tickets[i] == tickets[j])
				continue;
			else{
			
				string concat = tickets[i] + tickets[j];
				sort(concat.begin(), concat.end());
				
				vector<char> cstr(concat.begin(), concat.end());
				cstr.push_back('\0');
				
				string newConcat = removeDuplicate(&cstr[0]);
				
				if(newConcat == "0123456789")
					winningChance += 1;
					
			}
		}
	}
	
	
	cout << winningChance << endl;
	
	
	return 0;
}
