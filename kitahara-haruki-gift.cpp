#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	if(n==1){

		cout<<"NO\n";
		return 0;
	}
	int ans=0;
	int cnt_1 = 0;
	int cnt_2 = 0;

	for(int i =0; i<n;i++){
		if( (int)arr[i]/100 == 1) cnt_1++;
		else cnt_2++;
	}

	string res;
	if(cnt_1 > 0 && cnt_2 > 0){
	if(cnt_1 % 2 != 0 && cnt_2 % 2 != 0 ){
		res = "NO\n";
	}else if(cnt_1 % 2 == 0 && cnt_2 % 2 == 0){
		res = "YES\n";
	}else{
		for(int i =0; i< n;i++){
			ans += arr[i]/100;
		}

		if(ans%2==0) res="YES\n";
		else cout<<"NO\n";
	}
	}
	else if(cnt_1 == 0) {
		if(cnt_2&1) res = "NO\n";
		else res="YES\n";
	}else if (cnt_2 == 0){
		if(cnt_1&1) res = "NO\n";
		else res="YES\n";
	}
	cout<<res;
	return 0;
}
