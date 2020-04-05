#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	cin>>n;
	int arr[n];
	for(int i =0; i <n; i++){
		cin>>arr[i];
	}
	cin>>m;
	int arr2[m];
	for(int i =0; i <m; i++){
		cin>>arr2[i];
	}
	int cnt = 0;
	int maxi = INT_MIN;
	for(int i =0; i<m; i++){
		for(int j=0; j < n; j++){
			if(arr2[i] % arr[j] == 0){
				if( maxi == ( arr2[i] / arr[j])) cnt++;
		       		else if(maxi < (arr2[i] / arr[j])){
				cnt = 1;
				maxi = (arr2[i] / arr[j]);		
				}

			}
		}
	}

	cout<<cnt<<endl;

	
	return 0;
}
