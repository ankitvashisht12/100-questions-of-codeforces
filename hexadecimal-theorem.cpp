#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;


	if(n==0){
		cout<<0<<" "<<0<<" "<<0<<endl;
		return 0;
	}
	else if(n==1){
		cout<<0<<" "<<0<<" "<<1<<endl;
		return 0;
	}
	else{
	int f = 0, s = 1;
	int t;
	int e = 0;
	while(true){
		t = f+s;
		if(t < n){
			e = f;
			f = s;
			s = t;
		}
		if(t>=n){
			break;
		}	
	}

	if(t == n){
		cout<<e<<" "<<f<<" "<<f<<endl;
	}else{
		 cout<<"I'm too stupid to solve this problem\n";
	}
	return 0;

	}
}
