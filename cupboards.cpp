#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int l[n];
    int r[n];

    //int one=0, two=0, zero=0, three=0;

    for(int i=0; i<n;i++){
        cin>>l[i]>>r[i];
        // cin>>l>>r;
        // //check_num(l, r);

        // if(l==0 && r==0){
        //     zero++;
        // }else if(l==1 && r==0){
        //     two++;
        // }else if(l==0 && r==1){
        //     one++;
        // }else{
        //     three++;
        // }

        
    }

    int l_one = 0, l_zero = 0, r_one=0, r_zero=0;
    for(int i= 0; i<n; i++){
        if(l[i] == 0){
            l_zero++;
            if(r[i] == 0){
                
                r_zero++;
            }else if(r[i] == 1){
                r_one++;
                
            }
        }else{
            l_one++;
            if(r[i] == 0){
                r_zero++;
            }else if(r[i] == 1){
                r_one++;
            }
        }
    }
    int ans = 0;
    if(l_zero > l_one){
        ans +=  l_one;
    }else{
        ans += l_zero;
    }
    
    
    if(r_zero > r_one){
        ans +=  r_one;
    }else{
        ans += r_zero;
    }

    cout<<ans<<endl;

    return 0;
}