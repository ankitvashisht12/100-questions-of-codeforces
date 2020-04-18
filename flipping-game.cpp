#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    int cnt=0, ans=0, maxans=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=0; k<n; k++){
                if(i<=k && k<=j) cnt+=1-arr[k];
                else cnt+= arr[k];
            }

            ans = max(cnt, ans); 
            cnt=0;
        }
        maxans=max(ans, maxans);
    }
    cout<<maxans<<endl;
    
    return 0;
}

