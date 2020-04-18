#include<bits/stdc++.h>
using namespace std;

int main(){

      freopen("input.txt", "r", stdin);
     /freopen("output.txt", "w", stdout);
     int n;
     cin>>n;

    
    unordered_map<int, int> m;
    int e= 0;
    vector<int> v;
    for(int i=0; i<2*n; i++){
        int a;
        cin>>a;

        if(m[a] == 0) m[a] = i+1, e++;
        else{
            v.push_back(i+1);
            v.push_back(m[a]);
            m[a] = 0;
            e--;
        }
    // cout<<e<<endl;
    }


    if(e ==0){
        for(int i= 0; i<v.size();i++){
           if(i % 2 == 0)
           cout<<v[i]<<" "; 
           else cout<<v[i]<<endl;
        }
    }else cout<<-1<<endl;

    return 0;
}

