#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	unordered_set<int> s;
	map<int, int> m;
	int val =0;
	for(int i=0; i<n; i++){
		
		if(s.find(arr[i]) == s.end()){
			s.insert(arr[i]);

			int diff = 0;
			int cnt = 1;
			int pos = i;
			bool flag = true;
			for(int j=i+1; j<n; j++){
				if(arr[i] == arr[j]){
					cnt++;
					if (cnt <= 2){
						diff = j - pos;
						pos = j;
					}
					else{
						if(diff == j - pos){
							pos = j;
							flag = true;
						}else{
							flag = false;
							break;
						}
					}
				}
			}

			if(flag){
				val++;
				m[arr[i]] = diff;
			}
		
		}
	}

	cout<<val<<endl;
	for(auto it: m){
		cout<<it.first<<" "<<it.second<<endl;
	}

	return 0;
}
