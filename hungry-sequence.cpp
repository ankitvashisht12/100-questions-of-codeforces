#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n == 2 || n ==3) return true;

	if(n%2 == 0) return false;

	for(int i=2; i*i <= n; i++){
		if(n%i == 0)
			return false;
	}

	return true;
}

int main(){
	int n;
	cin>>n;
	int i =2;  
	while(n>0){
		if(isPrime(i)){
			if(n > 1) cout<<i<<" ";
			else cout<<i;
			n--;
		}
		i++;	
	}
	cout<<endl;	
	return 0;
}
