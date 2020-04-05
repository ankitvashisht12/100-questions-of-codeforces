#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int ans =0;
    int max = arr[0];
    int min = arr[0];
    for(int i =1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            ans++;
        }

        if(min > arr[i]){
            min = arr[i];
            ans++;
        }
    }

    //ans++;
    cout<<ans<<endl;
    return 0;
}