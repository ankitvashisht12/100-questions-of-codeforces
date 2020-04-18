#include<bits/stdc++.h>
using namespace std;

int main(){


    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     int n,m;
     cin>>n>>m;

     char ch ;
    string s = "";
    bool flag;
    if( n > m){
        flag = true;
     for(int i =0; i< 2*m; i++){
        if( i % 2 == 0) ch = 'B';
        else ch = 'G';
        s += ch;
     }
    }else{
        flag = false;
        for(int i = 0; i<2*n; i++){
            if(i%2 == 0) ch = 'G';
            else ch = 'B';

            s+= ch;
        }
    }
    if(flag) ch = 'B';
        else ch = 'G';

    for(int i = 0; i< abs(n-m); i++){
                s+= ch;
    }

    cout<<s<<endl;
    return 0;
}

