#include<bits/stdc++.h>
using namespace std;


int main(){
	int n; 
	cin>>n;
	int arr[n];

	for(int i =0; i<n; i++){
		cin>>arr[i];

	}

        int idx = 0;
	int min = arr[0];
	bool flag = false;
	for(int i = 1; i < n; i++){
		if(min == arr[i]){
			flag = true;
		}
		if( min > arr[i]){
			min = arr[i];
			flag=false;
			idx = i;
		}
	}

	if(flag) cout<<"Still Rozdil\n";
	else cout<<idx+1<<'\n';

	return 0;

}
