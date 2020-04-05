#include<bits/stdc++.h>
using namespace std;


int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	long long n, k;
        cin>>n>>k;
	long long n_odds = n - n/2;
 	if(k <= n_odds){
		cout<<1+((k-1)*2)<<endl;
	}else{
		cout<<2+((k-n_odds-1)*2)<<endl;
	}	
	return 0;
}
