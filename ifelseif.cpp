/* A school has following rules for grading system:
a. below 25-F
b. 25 to 44 -E
c. 45 to 49 -D
d. 50 to 59 -C
e. 60 to 79 -B
f. 80 to 100 -A
ASK USER TO ENTER MARKS AND PRINT THE CORRESPONDING GRADE.
*/

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int marks;
//     cin>>marks;

//     if(marks<25){
//         cout<<"F";
//     }
//     if(marks>=25 && marks<=44){
//         cout<<"E";
//     }
//     if(marks>=45 && marks<=49){
//         cout<<"D";
//     }
//     if(marks>=50 && marks<=59){
//         cout<<"C";
//     }
//     if(marks>=60 && marks<=79){
//         cout<<"B";
//     }
//     if(marks>=80 && marks<=100){
//         cout<<"A";
//     }
//     return 0;
//     //if marks =24
//     //then first statement is executed but the other all will be executed as false 
// }
int main(){
    int marks;
    cin>>marks;

    if(marks<25){
        cout<<"F";
    }
    else if(marks<=44){
        cout<<"E";
    }
   else if(marks<=49){
        cout<<"D";
    }
    else if( marks<=59){
        cout<<"C";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else if(marks<=100){
        cout<<"A";
    }
    return 0;
}
