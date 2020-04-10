#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;


	unordered_set<int> s;
	vector<int> v;
	for(int i =0; i<n; i++){
		int temp = 0;
		cin>>temp;
		v.push_back(temp);
	}
	if(n==1){
		cout<<0<<endl;
		return 0;
	}


	
	auto it = v.begin()+k-1;
	for(auto it = v.begin()+k-1; it != end(v); it++) s.insert(*it);



	if(s.size() == 1){
		if(v[k-1] != v[k-2] && k >= 2){
			cout<<k-1<<endl;
			return 0;
		}
		else
		{	int cnt = 0;
			for(int i = k-2; i >=0 ; i--){
				if(v[i] != v[i+1]){
					cnt = i+1;
					break;}
			}

			cout<<cnt<<endl;
		return 0;
		}
	}else{
		cout<<-1<<endl;
		return 0;
	}

}
