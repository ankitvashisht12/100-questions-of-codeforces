#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned int l1, l2, l3;
	cin>>l1>>l2>>l3;
	
	cout << 4*(  (sqrt((l1*l2)/ l3)) + (sqrt((l2*l3)/l1)) + (sqrt((l1*l3)/l2)));	


	return 0;

}
