#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;

     int cnt=0;

     for(int i = 1; i<=n ; i++){
         for(int j =i; j <=n; j++){
             for(int k=j; k <= n; k++){
                 if( i*i + j*j ==  k*k) cnt++; // , cout<<i*i<<" "<<j*j<<" "<<k*k<<endl;
             }
         }
     }

     cout<<cnt<<endl;
    return 0;
}

