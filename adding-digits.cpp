#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, n;
    cin>>a>>b>>n;
    stringstream ss;
    ss << a;
    string sa; ss >> sa;
    int len = sa.size();
    long long prev_a =a ;
    bool flag=true;
        long long temp = a*10;
        for(int j =0; j <=9; j++){
            if((temp+j) % b==0){
                a = temp+j;
                break;
            }
        }
        if(a == prev_a){
            flag=false;
        }else prev_a = a;
        


    if(flag){
        n--;
        cout<<a;
        for(int i=0; i<n; i++) cout<<0; 
    }
    else cout<<-1<<endl;
    return 0;

}

