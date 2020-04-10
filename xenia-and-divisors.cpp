#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}

	bool flag = true;
	unordered_set<int> s;
	map<int, int> m;

	s.insert( begin(v), end(v));
	int cnt_3 = 0, cnt_6=0, cnt_4=0, cnt_2=0;
	
	if(s.size() > 2){
		for(auto it: v){
			m[it]++;
		}

		if(m.find(1) == m.end()){
			flag = false;
		}else{
			if(m[1] >= (int)n/3){

				if(m.find(2) != m.end()) cnt_2 = m[2];
				if(m.find(6) != m.end()) cnt_6 = m[6];
				if(m.find(4) != m.end()) cnt_4 = m[4];
				if(m.find(3) != m.end()){
					cnt_3 = m[3];
					if(m.find(6) == m.end()) flag = false;
					else{
						if(cnt_6 < cnt_3) flag = false;
						if(abs(cnt_4 - cnt_2) != abs(cnt_6 - cnt_3)) flag = false;
					}
				}else{
					if(cnt_4 > 0 && cnt_6>0 ){
						if(cnt_4 > cnt_2) flag = false;
						else if (cnt_6 > cnt_2) flag = false;
						else if(cnt_2 - cnt_4 !=cnt_6) flag = false;
					}else{
						if(cnt_4 > 0 && cnt_4-cnt_2 != 0) flag = false;
						if(cnt_6 > 0 && cnt_6-cnt_2 != 0) flag = false;
					}
				
				}



			}else{
				flag = false;
			}	
		}
	}else{
		flag = false;
	}

	if(m.find(5) != m.end() || m.find(7) != m.end()) flag = false;

	if(flag){


		for(int i=0 ; i < (int)n/3; i++){
			cout<<1<<" ";
			if(m[4] > 0){
				cout<<2<<" "<<4<<endl;
				m[2]--;
				m[4]--;
			}else if(m[3] > 0){
				cout<<3<<" "<<6<<endl;
				m[3]--;
				m[6]--;
			}else if(m[6] > 0 || m[2] > 0){
				cout<<2<<" "<<6<<endl;
				m[2]--;
				m[6]--;
			}
		}
	}
	else cout<<-1<<endl;


	return 0;
}
