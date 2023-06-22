//if else statement
//write a program that takes an input of age 
// and prints if you are adult or not
//>=18 - adult yes
//<18 - n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age>=18){
       cout<<"you are an adult!";
    }
    // else{
    //    cout<<"you are not an adult!";
    // }
    else if(age<18){//only get into the else 
        cout<<"you are not an adult!";
    }
    return 0;
}
// it is not compulsory to use else statement 