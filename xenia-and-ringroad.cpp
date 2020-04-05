#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;

	int arr[m];
	for(int i =0; i<m; i++){
		cin>>arr[i];	
	}

	long long int t = arr[0]-1;

	for(int i =1; i<m; i++){
		if(arr[i] > arr[i-1]){
			t+= (long long int)arr[i]-arr[i-1];
		} 
		else if(arr[i] < arr[i-1]){
			t+= (long long int)n-arr[i-1]+arr[i];
		}
	}

	cout<<t<<endl;

	return 0; 
}
