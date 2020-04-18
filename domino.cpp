#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int usum=0, lsum=0;
    bool flag = false;
    int uo=0, lo=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a&1 ) uo++;
        if(b&1 ) lo++;
        usum+=a;
        lsum+=b;

    }
    if( (usum+lsum) %2 != 0) cout<<-1<<endl;
    else{
       cout<<min(uo%2, lo%2)<<endl; 
    }
    return 0;
}

