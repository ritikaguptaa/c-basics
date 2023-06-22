#include <bits/stdc++.h> 
long long titleToNumber(string str) {
    // Write your code here
    int result=0;
    int n=str.length();

    for (int i = 0; i < n; i++) {
      int charValue = str[i] - 'A' + 1;
      result += charValue * pow(26, n - 1 - 1);
    }
    return result;
    }
        int main(){
        int n;
        cout<<"Enter the number of column titles:";
        cin>>n;
        cout<<"Enter the column titles:"<<endl;
        for (int i = 0; i < n; i++) {
          string str;
          cin >> str;
          int columnNumber = titleToNumber(str);
          cout << "Column number for " << str << ": " << columnNumber << endl;
        }
        return 0;
        }
