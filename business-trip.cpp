#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin>>k;
	int arr[12];
	for(int i =0; i<12; i++){
		cin>>arr[i];
	}

	if(k == 0){
		cout<<k<<endl;
		return 0;
	}
	sort(arr, arr+12, greater<int>());
	int sum = 0;
	int i =0;
	while(i < 12){
		sum += arr[i];
	       	i++;	
		if(sum >= k) break;
	}

	if(i == 12 && sum < k) cout<<-1<<endl;
	else cout<<i<<endl;

	return 0;
}
