#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	map<char, int> m;

	for(auto ch: s)
		m[ch]++;
	int cnt = 0;
	for(auto it: m)
		if(it.second & 1)
			cnt++;

	if(cnt == 0) cout<<"First\n";
	else if(cnt > 0){
		if(cnt % 2 == 0) cout<<"Second\n";
		else cout<<"First\n";
	}

	return 0;
}
