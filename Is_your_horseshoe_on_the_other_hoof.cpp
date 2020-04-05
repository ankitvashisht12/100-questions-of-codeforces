#include<bits/stdc++.h>

using namespace std;

int main(){

    set<int> s;
    for(int i=0; i<4; i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }

    cout<<4-s.size()<<endl;
    return 0;
}