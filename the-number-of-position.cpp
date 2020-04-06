#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int cnt=0;
	for(int i =0; i<n; i++){
		if(n-(i+1) <= b && i+1 > a) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
