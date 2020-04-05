#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    map<char, int> m1;
    map<char, int> m2;

    int n1 = s1.length();
    int n2 = s2.length();
    int n3 = s3.length();
    bool flag=true;
    if((n1+n2) == n3){
        for(char c:s1){
            m1[c]++;
        }
        for(char c:s2){
            m1[c]++;
        }
        for(char c:s3){
            m2[c]++;
        }

        for(char c:s3){
            if(m1[c] != m2[c]){
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}