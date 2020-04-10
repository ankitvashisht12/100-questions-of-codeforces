#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	
	cin>>s;
	string ans="";
	bool flag = false;
	for(auto ch : s){
		if(!flag && ch =='0'){
		       	flag = true;
			continue;
		}
		else
		ans+= ch;
	}
	if(flag)
	cout<<ans<<endl;
	else{
		for(auto ch = 0; ch < s.size()-1; ch++) cout<<s[ch];
		cout<<endl;
	}
	
	return 0;


}
