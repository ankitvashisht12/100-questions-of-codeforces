#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string strnum = "";
    int n = s.length();
    int i =0;
    while(i < n){
        if(s[i] == '.'){
            strnum += '0';
            i += 1 ;
        }
        else if(s[i] == '-'  && s[i+1] == '.' && i+1 <= s.length()){
            strnum += '1';
            i += 2;
        }
        else{
            strnum += '2';
            i += 2;
        }
    }

    cout<<strnum<<endl;
    return 0;
}