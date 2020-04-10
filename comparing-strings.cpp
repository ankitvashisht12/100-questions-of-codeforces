#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin>>s1>>s2;

	
	string res="YES\n";
	if(s1.size() != s2.size()){
		res = "NO\n";
	}else{


		map<char, int> m1, m2;

		for(auto ch : s1){
			m1[ch]++;
		}
		for(auto ch: s2){
			m2[ch]++;
		}
		int cnt = 0;
		bool flag = true;
		for(int i = 0; i< s1.size(); i++){
			if(s1[i] != s2[i] ){
				if(m1.find(s2[i]) == m1.end() || m2.find(s1[i]) == m2.end()){
					flag = false;
					break;
				}
				else{
					cnt++;
				}
			}
	
		}
		if(flag){
			if(cnt >= 3) res = "NO\n";
			else res = "YES\n";
		}else res = "NO\n";
	}

	cout<<res;
	return 0;

}
