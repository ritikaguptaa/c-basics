//PASS BY VALUE : it is just create the copy 

#include<bits/stdc++.h>
using namespace std;

// int doSomething(int num){
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
// }

// int main(){
//   int num=20;
//   doSomething(num);
//   cout<<num<<endl;
//     return 0;
// }


void doSomething(string name){
    name[0]='t';
    cout<<name<<endl;
}

int main(){
    string name="raj";
    doSomething(name);
    cout<<" the string is : "<<name<<endl;
    return 0;
}