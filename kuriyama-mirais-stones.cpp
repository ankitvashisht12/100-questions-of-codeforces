#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> vec(n);
    vector<long long> sorted_vec;

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }


    sorted_vec = vec;

    sort(sorted_vec.begin(), sorted_vec.end());
    
    // build prefix array

    for(int i =1 ; i<n;  i++){
        vec[i] += vec[i-1];
        sorted_vec[i]+= sorted_vec[i-1];
    }

    int m;
    cin>>m;

    while(m--){
        int type, l, r;
        cin>>type>>l>>r;
        long long res;
        if(type == 1){
            res = vec[r-1];
            if( l-2 >= 0) res-= vec[l-2];
        }
        else{
            res = sorted_vec[r-1];
            if( l-2 >=0) res -= sorted_vec[l-2];
        }

        cout<<res<<endl;
    }
        
    return 0;
}

