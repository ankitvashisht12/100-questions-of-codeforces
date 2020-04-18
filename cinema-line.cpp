#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int cnt_25=0, cnt_50=0;
    bool flag=true;
    while(n--){
        long long a;
        cin>>a;
        if(a == 50 && cnt_25 >= 25) cnt_50+=50, cnt_25-=25;
        else if(a == 100 ){
            if(cnt_25 >= 25 && cnt_50 >= 50){
                cnt_25-=25;
                cnt_50-=50;
            }
            else if(cnt_25 >= 75) cnt_25-=75;
            else {
                flag=false;
                break;
            }
        }
        else if(a==25) cnt_25+= 25;
        else {flag=false;break;}
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

