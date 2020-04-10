#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	
	getline(cin, s1);
	getline(cin, s2);
	map<char, int> m;
	for(auto ch : s1){
		if(ch != ' ')
			m[ch]++;
	}
	
	bool flag = true;

	for(auto ch: s2){
		if(ch != ' '){
			if(m.find(ch) == m.end() || m[ch] <= 0 ){ 
				flag=false;
				break;
			}
			else m[ch]--;
		}
	}

	if(flag) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
