#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m;
     cin>>n>>m;
     vector<int> a(n,0);
     vector<int> b(m,0);

     for(int i=0; i<n;i++){
         cin>>a[i];
     }

     for(int i = 0; i<m; i++) cin>>b[i];
    
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    
    
    int v = a[0];
    int p = a[n-1];
    int c = b[0];

    if(max(2*v, p) < c) cout<<max(2*v, p)<<endl;
    else cout<<-1<<endl;
    return 0;
}

