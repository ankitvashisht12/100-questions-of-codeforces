#include<bits/stdc++.h>

using namespace std;

int main(){
    string username;
    cin>>username;

    set<int> s;
    for(int i =0; i<username.length(); i++){
        s.insert(username[i]);
    }

    if(s.size() % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}