#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    int x;
    int c = 0;
    cin>>n;
    while(n){
        x = n%10;
        if(x==4 || x==7){
            c++;
        }
        n = n/10;
    }

    if(c==4 || c==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}