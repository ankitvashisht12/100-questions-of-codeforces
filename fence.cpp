#include<bits/stdc++.h>
using namespace std;

int main(){
     int n, k;
     cin>>n>>k;
     vector<int> h(n,0);

     for(int i =0; i<n; i++)cin>>h[i];

    int sum = 0;
    int idx = 1;

    if(n == k){
        cout<<1<<endl;
        return 0;
    }
    int minsum = 0;
     for(int i=0; i<n; i++){
         
         if(i >= k){
             sum = sum - h[i-k]+h[i];
             if(sum < minsum){
                minsum = sum;
                idx = i + 2 - k;
                //cout<<"sum is :"<<sum<<" IDX is :"<<idx<<" i is :"<<i+1<<endl;
             }
         }else{
            minsum += h[i];
            sum += h[i];
         }

     }

     cout<<idx<<endl;
    return 0;
}

