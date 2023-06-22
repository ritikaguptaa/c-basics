//if else statement
//write a program that takes an input of age 
// and prints if you are adult or not
//>=18 - adult yes
//<18 - no 

#include<bits/stdc++.h>
using namespace std;
 
 int main(){
int age;
cin>>age;
if(age>=18){
    cout<<"You are an adult!";
}
else if(age<10){
    cout<<"you are not an adult!";
}
return 0;
 }