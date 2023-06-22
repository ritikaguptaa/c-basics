//STRINGS: string stores character within itself.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ="ritika";
    // cout<<s[0];
    int len=s.size();// to know the length of data
    //for modification :
    s[len-1]='z';
    cout<<s[len-1];
    return 0;
}