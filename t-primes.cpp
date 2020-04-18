#include<bits/stdc++.h>
using namespace std;

bool check_prime(long long n){
    if(n<=1) return false;  
    if( n == 2 || n == 3 ) return true;

    for(int i=2; i*i <= n; i++)
        if(n % i == 0) return false;

    return true;
}


string check_tprime(long long x){
    long long sq = (long long)sqrtl(x);
    if(check_prime(sq)&& sq*sq == x )
       return "YES\n";
    
    return "NO\n";
}


int main(){
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        cout<<check_tprime(x);
    }
    return 0;
}

