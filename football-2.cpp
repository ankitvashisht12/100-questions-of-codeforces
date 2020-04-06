#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	int cnt_zero = 0;
	int cnt_one = 0;
	string ans="NO";
	for(int i =0; i<s.size(); i++){
		if(s[i] == '0'){
			cnt_one = 0;
			cnt_zero++;
		}
		if(s[i] == '1'){
			cnt_one++;
			cnt_zero = 0;
		}

		if(cnt_zero == 7 || cnt_one == 7) {ans = "YES"; break ;}

	}

	cout<<ans<<endl;
	return 0;
}
