#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
        ll a, b;
        cin >> a >> b;
        
        cout << max(a/b, b/a) << endl;
    }
}