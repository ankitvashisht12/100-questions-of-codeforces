#include<bits/stdc++.h>

using namespace std;

int main(){

    string ns, ms;
    cin>>ns;
    cin>>ms;



    string ans = "";
    for(int i = 0; i < ns.length(); i++){
        if(ns[i] != ms[i]){
            ans += '1';
        }else{
            ans += '0';
        }
    }

    cout<<ans<<endl;
    return 0;
}