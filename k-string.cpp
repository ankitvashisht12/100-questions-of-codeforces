#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	string s;
	cin>>k>>s;
	map<char,int> m;
	for(int i =0; i<s.size(); i++){
		m[s[i]]++;
	}
	int l;
	bool flag = true;
	string ans = "";
	for(auto it = m.begin(); it != m.end(); it++){
		if(it->second % k != 0){
			flag = false;
			break;
		}else{
			l = it->second / k;
			while(l--)
			ans += it->first;
		}
	}

	if(flag){
		string ans2="";
		
		for(int i=0; i<k; i++)
			ans2+= ans;
		cout<<ans2<<endl;
	}
	else cout<<-1<<endl;
	return 0;
}
