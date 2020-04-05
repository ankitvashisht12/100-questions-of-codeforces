#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string ans = "";
        if(s.length() > 10){
            ans += s[0];
            ans += to_string(s.length()-2);
            ans += s[s.length()-1];
            cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}