#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(islower(str[i]))
            str[i] = str[i] -32;
        else
            str[i] = str[i] + 32;
    }
    cout << str;
    return 0;
}