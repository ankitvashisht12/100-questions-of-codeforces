#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	string ans="";

	for(int i=0; i<s.size(); i++){
		char ch = s[i];	
		if(ch=='a' || ch=='y' || ch== 'Y' || ch=='A' || ch=='e' || ch=='E' ||
	ch=='i' || ch=='I' || ch=='o' || ch=='O' ||
	ch=='u' || ch=='U') continue;	
		else{
		ans += '.';
		ans += tolower(s[i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
