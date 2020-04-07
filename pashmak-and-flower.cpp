#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i = 0 ; i<n; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	int first=0, last = 0;
	for(int i = 0 ; i<n; i++){
		if(arr[i] == arr[0]) first++;
		else break;
	}

	
	for(int i = n-1 ; i>=0; i--){
		if(arr[i] == arr[n-1]) last++;
		else break;
	}

	int maxdif = arr[n-1] - arr[0];
	
	long long ways = (long long)first*last;
	if(arr[n-1] != arr[0]){
		cout<<maxdif<<" "<<ways<<endl;
	}
	else {
		ways = ((n*1LL*(n-1))/2);
		cout<<0<<" "<<ways<<endl;
	}
	return 0;

}

