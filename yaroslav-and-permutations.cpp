#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int arr[n];

     for(int i = 0; i<n; i++){
         cin>>arr[i];
     }

     map<int, int> m;

     if(n == 1 ){
         cout<<"YES\n";
         return 0;
     }

     
    for(int i =0; i<n; i++){
        m[arr[i]]++;
    }

    bool flag=true;
    
    for(auto p : m){
        if(p.second > (n+1)/2){
            flag=false;
            break;
    }
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

