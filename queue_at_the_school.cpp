#include<iostream>
#include<stdio.h>
#include<utility>
#include<string>
#include<math.h>
#include<ctype.h>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
 int size,time;
 cin>>size>>time;
 string s;
 cin>>s;
 for(int j=0;j<time;j++)
 {
     int i=0;
 while(i<=size-2)
 {
    if(s[i]=='B' && s[i+1]=='G')
    {
        s[i]='G';
        s[i+1]='B';
        i+=2;
    }
    else
    {
        i++;
    }
 }
 }
 cout<<s;
return 0;
}
