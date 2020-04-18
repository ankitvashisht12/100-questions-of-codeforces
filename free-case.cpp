#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int hr[n], mi[n];
    for(int i=0; i < n; i++){
        cin>>hr[i]>>mi[i];
    }

    int cash = 1;
    int micash = 1;
    for(int i=1; i<n; i++){
       if(hr[i] == hr[i-1] && mi[i] == mi[i-1]) cash++;
       else{
           micash = max(micash , cash);
           cash = 1;
       }
    }


    cout<<max(cash , micash)<<endl;
    return 0;
}

