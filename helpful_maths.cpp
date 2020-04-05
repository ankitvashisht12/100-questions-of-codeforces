#include<bits/stdc++.h>

using namespace std;

bool comparator(int i, int j){
    cout<<i<<" "<<j<<endl;
    return ( i < j );
}


int main(){

    string s;
    cin>>s;
    int n = s.length()/2;
    char ar[n];
    for(int i=0; i<s.length(); i+=2){
        int n = (int)s[i];
        ar[i] = s[i];
        //cout<<n<<" "<<s[i]<<endl;
    }

    sort(ar, ar+n, comparator);

    for(int i =0; i<n; i++){
        cout<<ar[i];
    }
    return 0;
}