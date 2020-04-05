#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;

	map<string, int> m;
	while(n--){
		string s;
		cin>>s;
		m[s]++;
	}
	int max = INT_MIN;
	string ans;
	for(auto it: m){
		//cout<<it.second<<endl;
		if(max < it.second){ 
			max = it.second;
			ans = it.first;
		}
	}

	cout<<ans<<endl;
	return 0;
}
