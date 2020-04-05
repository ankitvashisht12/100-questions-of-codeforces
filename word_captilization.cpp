#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    if(!isupper(s[0])){
        s[0] = toupper(s[0]);
    }

    cout<<s<<endl;
    return 0;
}