#include<bits/stdc++.h>
using namespace std;

const int mod = 1073741824;

int d(int n){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0) cnt++;
    }

    return cnt % mod;
}
int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    int sum = 0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                sum += d(i*j*k);
            }
        }
    }

    cout<<sum<<endl;
    return 0;
}

