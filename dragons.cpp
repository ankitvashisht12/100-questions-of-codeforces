#include<bits/stdc++.h>
using namespace std;

struct dragon{
	int d;
	int y;
};

bool d_sort(dragon d1, dragon d2){
	return d1.d < d2.d;
}
int main(){
	int s, n;
	cin>>s>>n;
	dragon data[n];

	for(int i=0; i<n;i++){
		int temp_d, temp_y;
		cin>>temp_d>>temp_y;
		data[i].d = temp_d;
		data[i].y = temp_y;
	}

	sort(data, data+n, d_sort);
	
	bool flag = true;
	for(int i=0; i<n; i++){
		if(s <= data[i].d) {
			flag=false;
			break;
		}
		
		s += data[i].y;	
	}
	
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
	
	
	return 0;
}
