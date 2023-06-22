//array: when we have similar data type and used it for multiple times.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]; //it will create 5 boxes with incides 0,1,2,3,4, 1st guy referenced by 0th index and so on..
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // arr[2] += 12; MODIFICATION 
    arr[2]=13;
    cout<<arr[2];// it means 3rd guy referenced by 2nd index
    return 0;
}

//where arrays are stored?
/* entire thing is taken and stored in MEMORY LOCATION

array elements are stored in CONSECUTIVE MEMORY ADDRESS ,but we are not sure where the first element will store 
it can be stored any randomised location.*/