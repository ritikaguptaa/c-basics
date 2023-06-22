//for arrays reference: array will always go with reference   
#include<bits/stdc++.h>
using namespace std;

int doSomething(int arr[], int n ){
 arr[0] += 100;
 cout<<" the valuie inside the function will be : "<<arr[0]<<endl;
}

int main(){
    int n=5;
    int arr[n];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4];
    for(int i=0;i<n;i=i+1){// i<=n=1
        cin>>arr[i];
    }
    // for(int i=0;i<=n-1;i=i+1){
    //     cout<<arr[i]<<" ";
    // }

doSomething(arr, n);
    cout<<"the value is : "<<arr[0]<<endl;

    return 0;
}