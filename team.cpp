#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans=0;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b,c;
        int temp=0;
        cin>>a>>b>>c;

        if(a==1) temp++;
        if(b==1) temp++;
        if(c==1) temp++;

        if(temp >= 2){
            ans++;
        }
        
    }

    cout<<ans<<endl;
    return 0;
}