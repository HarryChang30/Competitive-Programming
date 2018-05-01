#include <bits/stdc++.h>

using namespace std;

int main()
{	
	//map<string , int> contest;
	vector< pair<string, int> > contest;
	
	int n;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int a,b;
		scanf("%d %d",&a,&b);
		
		int difference = b - a;
		
		contest.push_back( make_pair(s, difference) );
	}
	
	
	int maks = -100000;
	string winner = "";
	
	for(int i = 0; i < n; i++){
		
		if(contest[i].second > maks){
			
			maks = contest[i].second;
			winner = contest[i].first;
		}
		
	}
	
//	for(map <string, int>::iterator ii = contest.begin(); ii != contest.end(); ++ii){
//		
//		if((*ii).second > maks){
//			maks = (*ii).second;
//			winner = (*ii).first;
//		}
//		
//		cout << (*ii).first << " " << (*ii).second << endl;
//	}
//	
	cout << winner << " " << maks;
	
	return 0;
}
