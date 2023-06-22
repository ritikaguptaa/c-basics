//pass by reference : ( & ) get the original value 

#include<bits/stdc++.h>
using namespace std;

// int doSomething(int &num){
//     cout<<num<<endl;
//     num +=5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;

//     doSomething(num);
//     cout<<num<<endl;

//     return 0;
// }

void doSomething(string &s){

    cout<<s<<endl;
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    string s;
    cin>>s;

    doSomething(s);
    cout<<s<<endl;

    return 0;
}