#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];


    int suffix[n];
    set<int> s;

    int val=0;    
    for(int i=n-1; i>=0; i--){
       if(s.count(arr[i])){
           suffix[i] = val; 
       }else{
           val++;
           s.insert(arr[i]);
           suffix[i] = val;
       }
    }

    while(m--){
        int l;
        cin>>l;
        cout<<suffix[l-1]<<endl;
    }
    return 0;
}

