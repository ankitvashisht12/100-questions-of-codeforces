// Not solved yet :/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];

    int max_idx = 1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    
    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            max_idx = i+1;
        }
    }

    if(max > m){
        cout<<max_idx<<endl;
    }else{
        cout<<n<<endl;
    }
    return 0;
}