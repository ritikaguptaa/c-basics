//functions : it is a set of code which performs something for you 
// it is used for modularise code 
// increase readability 
// use same code multiple times 

//void => which does not return anything 
//return 
// parameterised
// non parameterised

#include<bits/stdc++.h>
using namespace std;

// void printName(string name,string name1){
//     cout<<"striver "<<name<<" "<<name1<<endl;
// }

// int sum(int a,int b){
//     int c;
//     return c=a+b;
// }

// void sum(int a, int b){
//     int c=a+b;
//     cout<<c<<endl;
// }

// int maxx(int num1,int num2){
//     if(num1>num2){
// return num1;
//     } else{
//         return num2;
//     }
    
//  void doSomething(int &num){
//     cout<<num<<endl;
//     num +=5;
//     cout<<num<<endl;
//     num +=5;
//     cout<<num<<endl;
//  }  

// void doSomething(string &s){
//     s[0]='t';
//     cout<<s<<endl;
// }
void doSomething(int arr[],int n){
    arr[0] +=100;
    cout<<" value inside function"<<" "<<arr[0]<<endl;
}
int main(){
//     string name1,name2;
//     cin>>name1>>name2;
// printName(name1,name2);
// int a,b;
// cin>>a>>b;
// cout<<" the result is : ";
// sum(a,b);
// int num1,num2;
// cin>>num1>>num2;

// int maximum=maxx(num1,num2);
// cout<<" the max is : "<<maximum<<endl;
// int num;
// cin>>num;
// doSomething(num);
// cout<<num<<endl;
// string s;
// cin>>s;
// doSomething(s);
// cout<<s<<endl;
int n=5;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
doSomething(arr,n);
cout<<"value inside int main : "<<arr[0];
    return 0;
}
