#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n;
	cin>>n;
	stringstream ss;
	ss << n;

	string s;
	ss >> s;
	bool flag = false;
	int cnt= 0;
	if(s[0] == '1')
	for(int i=0; i< s.length(); i++){
		if(s[i] == '1' || s[i] == '4'){
			cnt++;
			//if(cnt == 4) cnt = 1;
			if(s[i] == '4'){
			  if(cnt>3 && s[i-1] == '4' && s[i-2] == '4') {
			  	flag = true;
				break;
			  }
			}		
		}
		else{
			flag = true;
			break;
		}
	}

	else flag=true;

	if(flag) cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}
