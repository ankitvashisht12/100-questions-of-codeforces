#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sx,sy,ex,ey;
	cin>>n>>sx>>sy>>ex>>ey;

	string s;
	cin>>s;
	int ans = 0;
	
	if(sx == ex && sy == ey){
		cout<<ans<<endl;
		return 0;
	}
	

	int i=0;
	while((ex != sx || ey != sy) && i < s.size()){
		ans++;
		if(sx < ex && s[i] == 'E') sx++;
		else if(sy < ey && s[i] == 'N') sy++;
		else if(sx > ex && s[i] == 'W') ex++;
		else if(sy > ey && s[i] == 'S') ey++;	
		i++;
	}
	if(ex == sx && ey == sy)
	cout<<ans<<endl;
	else cout<<-1<<endl;
	return 0;
}
