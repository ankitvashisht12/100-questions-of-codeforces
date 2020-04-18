#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,d;
    cin>>n>>m>>d;

    int arr[n*m];
    for(int i=0; i<n*m; i++){
        cin>>arr[i];
    }

    
    int k = n*m;
    int mod = arr[0]%d;
    for(int i=1; i<k; i++){
        if(arr[i] % d != mod){
            cout<<-1<<endl;
            return 0;
        }
    }

    sort(arr, arr+k);

    int mIdx = (k/2);

    int ans=0;
    for(int i =0 ;i<k ; i++){
        ans += abs(arr[i] - arr[mIdx]);
    }

    cout<<(int)ans/d<<endl;
    
    return 0;
}

