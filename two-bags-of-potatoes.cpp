#include<bits/stdc++.h>
using namespace std;

int main(){
     int y, n, k;

         cin>>y>>k>>n;
    

    int first = (((int)(y/k) + 1)*k) - y ;
     if(n <= y || first+y > n  ){
         cout<<-1<<endl;
         return 0;
     }
    for(int i = first; i<= n-y; i+=k) cout<<i<<" ";
    cout<<endl;
    return 0;
}

