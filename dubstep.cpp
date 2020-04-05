#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;
	string ans="";
	int n = s.size();
	bool flag = false;
	for(int i =0 ; i<n; i++){
		if(s[i] == 'W' && n-i >= 3){
			if(s[i+1] == 'U' && s[i+2] == 'B'){
				i += 2;
				if(ans.size() >= 1 && flag == true){
					flag= false;
					ans += ' ';
				}
			}else{
				flag = true;
			ans += s[i];
			}
		}
		else{
			flag = true;
			ans+= s[i];	
		}
	}

	if(ans[ans.size()-1] != ' ')
		cout<<ans<<endl;
	else
		for(int i = 0; i < ans.size()-1; i++) cout<<ans[i];
		cout<<endl;
	return 0;
}
