#include<bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;
long long calc(long long n, long long x, long long y){
    int z = n%6;
    switch(z){
        case 1: return x; break;
        case 2: return y; break;
        case 3: return (y-x)%mod; break;
        case 4: return -x; break;
        case 5: return -y; break;
        case 0: return (x-y)%mod; break;
    }
 }
int main(){
    long long x, y, n;
    cin>>x>>y>>n;
    
    x = x % mod;
    y = y % mod;
    long long res = calc(n , x, y);
    if(res < 0) 
    cout<<(res % mod ) + mod<<endl;
    else cout<<res%mod<<endl;
    return 0;
}
