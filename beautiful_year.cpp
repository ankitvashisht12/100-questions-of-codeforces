#include<bits/stdc++.h>

using namespace std;

int main(){

    int year;
    cin >> year;

    while(1){
        year += 1;
        string syear = to_string(year);

        set <char> set_year (begin(syear), end(syear));

        for(auto c : syear){
            set_year.insert(c);
        }

        if(set_year.size() == 4){
            cout<<year<<endl;
            break;
        }


    }

    return 0;
}