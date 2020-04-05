#include<bits/stdc++.h>
using namespace std;


int main(){
	string s,t;
	getline(cin, s);
	getline(cin, t);

	int s_len = s.length();
	 int t_len = t.length();

	if(s_len != t_len){
		cout<<"NO\n";
		return 0;
	}
	bool flag = true;
	for(int i = 0; i<s_len; i++){
		if(s[i] != t[s_len-i-1]){
			flag = false;
			break;
		}
	}

	if(flag) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
	
}
