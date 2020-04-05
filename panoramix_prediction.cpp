#include<bits/stdc++.h>

using namespace std;

bool check_prime(int x){

    if (x == 2 || x==3){
        return true;
    }

    for(int i=2; i*i<= x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;


    
    if(!check_prime(m)){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=n+1; i<=m; i++){
            
            if(check_prime(i)){
                if(i == m){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
                break;
            }
        }
    }
    return 0;
}