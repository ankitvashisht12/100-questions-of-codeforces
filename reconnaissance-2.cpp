#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0 ; i <n ; i++){
		cin>>arr[i];

	}

	int min = INT_MAX;
	int first;
	for(int i =0; i<n-1; i++){
		if(min > abs(arr[i]- arr[i+1])){
			min =  abs(arr[i]- arr[i+1]);
			first = i;
		}
	}


	if(min > abs(arr[0] - arr[n-1])) cout<<n<<" "<<1<<endl;
	else cout<<first+1<<" "<<first+2<<endl;
	return 0;
}
