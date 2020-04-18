#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<char,int> m;

    for(auto c : s){
        m[c]++;
    }

    vector<int> ans;
    for(auto i: m){
        ans.push_back(i.second);
    }

    sort(ans.begin(), ans.end(), greater<int>());


    long long int a=0;
    if(ans[0] > k) a = (long long)k*k;
    else
    for(int i=0; i<ans.size(); i++){
        if(ans[i] <= k){
            a += (long long)ans[i]*ans[i];
            k-= ans[i];
        }
        else{
            a += k*k;
            break;
        }
    }

    cout<<a<<endl;

    return 0;
}

