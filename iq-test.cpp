#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> matrix;
    for(int i =0 ; i < 4; i++){
        vector<char> row;
        for(int j=0; j<4; j++){
            char ch;
            cin>>ch;
            row.push_back(ch);

        }
        matrix.push_back(row);
    }
    bool flag=false;
    int b=0, w=0;
    for(int i =0 ; i<3; i++){
        for(int j = 0 ; j < 3; j++){
            if(matrix[i][j] == '#'){
                b++;
            }else w++;

            if( matrix[i][j+1] == '#' ) b++;
            else w++;

            if( matrix[i+1][j] == '#' ) b++;
            else w++;

            if( matrix[i+1][j+1] == '#' ) b++;
            else w++;

            if(w >= 3 || b >= 3){
                flag=true;
                break;
            }else w=0,b=0;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

