#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arx[n];
	int ary[n];

	for(int i =0; i<n; i++){
		cin>>arx[i]>>ary[i];
	}

	int minx = INT_MAX;
	int miny = INT_MIN;

	if(n==1){
		cout<<1<<endl;
		return 0;
	}
	int ans = 0;
	int min2x = INT_MAX;
	int min2y = INT_MIN;
	for(int i=0; i< n; i++){
		if(minx >= arx[i] && miny <= ary[i]){
			minx = arx[i];
			miny = ary[i];
			ans = i+1;
		}

		min2x = min(min2x , arx[i]);
		min2y = max(min2y , ary[i]);
	}

	if(min2x != minx ||  min2y != miny) ans = -1; 
	
		
		


	cout<<ans<<endl;

	return 0;
}
