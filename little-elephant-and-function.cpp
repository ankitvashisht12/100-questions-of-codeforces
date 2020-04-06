#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	if(n == 1){ cout<<1<<endl; return 0;}

	cout<<n<<" ";
	n--;
	for(int i = 1; i < n; i++){
		cout<<i<<" ";
	}
	cout<<n<<endl;
	return 0;
}
