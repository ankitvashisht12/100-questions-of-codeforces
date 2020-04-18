#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++) cin>>arr[i];

    sort(arr, arr+n);
    long long  moves=0;
    for(int i=0; i<n; i++){
        moves += abs(i+1-arr[i]);
    }

    cout<<moves<<endl;
    return 0;
}

