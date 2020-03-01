#include <bits/stdc++.h>
using namespace std;

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    return false;
    
}
bool isValid(string str){
    if('A' == str[2] and 'E' == str[2] and 'I' == str[2] and 'O' == str[2] and 'U' == str[2] and str[2] == 'Y')
        return false;
    else{
       if(isOdd(str[0] - '0' + str[1] - '0'))
         return false;
       
        if(isOdd(str[3] - '0' + str[4] - '0')) 
          return false;

        if(isOdd(str[4] - '0' + str[5] - '0'))
          return false;

        if(isOdd(str[7] - '0' + str[8] - '0'))
          return false;  

    }  
    if('A' != str[2] and 'E' != str[2] and 'I' != str[2] and 'O' != str[2] and 'U' != str[2] and str[2] != 'Y')
        return true; 
    return false;
}

// main

int main(){
    string str;
    cin >> str;
    
    if(isValid(str))
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;
    
}