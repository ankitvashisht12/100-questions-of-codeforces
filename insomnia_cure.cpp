#include<bits/stdc++.h>

using namespace std;

int lcm(int a, int b){
    return (a*b/__gcd(a,b));
}


int main(){
    int k,l,m,n;
    long d;
    int ans = 0;
    cin>>k>>l>>m>>n>>d;

    int ar[d] = {};
    if(k==1 || l==1 || m==1 || n==1){
        cout<<d<<endl;
    }else{
        ans = (d/k) + (d/l) + (d/m)+ (d/n) - ( (d/lcm(k,l)) + (d/lcm(k,m)) + (d/lcm(k,n))+ (d/lcm(l,n)) + (d/lcm(l,m)) + (d/lcm(l,n)) +(d/lcm(m,n))) ; //+ (d/lcm(l,m)) + (d/lcm(l,n)) +(d/lcm(m,n)) 
        cout<<ans<<endl;
    }
    return 0;
}