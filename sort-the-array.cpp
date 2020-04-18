#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int l=0,r=0;
    int cnt=0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
           if(cnt==0) l = i,cnt++; 
           if(cnt == -1) {cout<<"no\n"; return 0;}
        }
        if(arr[i] > arr[i-1]){
            if(cnt==1)r = i,cnt =-1;
        }
    }

    if(l==0) cout<<"yes\n1 1\n";
    else if(r==0){
        if(l==0 && arr[l] > arr[n-1])
            cout<<"yes\n"<<l<<" "<<n<<endl;
        else if(l==1 && arr[l-1] > arr[n-1]) cout<<"yes\n"<<l<<" "<<n<<endl;
        else if(l-2 >=0 && arr[l-2] <  arr[n-1])cout<<"yes\n"<<l<<" "<<n<<endl;
        else cout<<"no\n";
    }
    else if(arr[r] < arr[l-1]) cout<<"no\n";
    else if(l-2 >= 0 && arr[r-1] < arr[l-2]) cout<<"no\n";
    else {
        cout<<"yes\n";
        cout<<l<<" "<<r<<endl;
        }   
    return 0;
}

