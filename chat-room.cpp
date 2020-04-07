#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	int cnt = 0;
	for(int i =0; i<s.size(); i++){
		if(s[i]=='h' && cnt==0) cnt++;
		else if(s[i] =='e' && cnt==1) cnt++;
		else if(s[i] == 'l' && cnt == 2) cnt++;
		else if(s[i] =='l' && cnt==3) cnt++;
		else if(s[i] == 'o' && cnt==4) cnt++;
	}

	if(cnt == 5) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
