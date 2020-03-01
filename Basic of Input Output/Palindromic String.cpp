#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int i = a; i <= b; i++)
using namespace std;
int main(){
    string str;
    cin >> str;
    string newStr = str;
    reverse(str.begin(), str.end());
    if(str == newStr) cout << "YES";
    else cout << "NO";
}