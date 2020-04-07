#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	char ans[n][m];
	vector<string> vec;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		vec.push_back(s);
					
	}

	for(int i =0; i<n;i++){
		string s = vec[i];
		char ch;
		if(i%2==0) ch = 'W';
		else ch = 'B';
		for(int j = 0; j < m; j++){
			char sec_ch;
			if(ch == 'W') sec_ch = 'B';
			else sec_ch = 'W';

			if(s[j] == '.'){
				if(j%2==0) ans[i][j] = ch;
				else ans[i][j] = sec_ch;
			}else{
				ans[i][j] = s[j];
			}
		}
	}
	
		for(int i=0; i<n; i++){
			for(int j=0; j < m; j++){
				cout<<ans[i][j];
			}
			cout<<endl;
		}
	return 0;
}
