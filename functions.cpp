//FUNCTIONS: it is a set of code which performs something for you.
/*it is used to modularise code,
 use same code  multiple times
increase readability 

void -> it does not return anything 
return 
parameterised
non parameterised 
*/

#include<bits/stdc++.h>
using namespace std;

// void printName(){
//     cout<<"ritika "<<endl;
// }

void printName(string name){
cout<<" hey "<<name<<endl;
}

int main(){
    string name;
    cin>>name;

 string name2;
    cin>>name2;

   printName(name);
   
    printName(name2);
    return 0;
}
