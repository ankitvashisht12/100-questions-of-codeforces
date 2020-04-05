#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double sum = 0.0;
    cin>>n;
    for(int i=0; i<n; i++){
        double temp;
        cin>>temp;
        sum += temp;
    }

    cout<<setprecision(15)<<(sum/n)<<endl;


    return 0;
}