#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int arr[m];
	for(int i=0 ; i<m; i++){
		cin>>arr[i];
	}

	sort(arr, arr+m);
	
	int mini = INT_MAX;
	for(int i =0; i+n-1< m; i++){
		mini = min(arr[i+n-1] - arr[i], mini);
	}

	cout<<mini<<endl;
	return 0;
}
