#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
        unsigned long long int n;
        cin >> n;
        
        
        if(n % 2 == 0)
            cout << "YES" << endl;
        else if((3 * n + 1) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO";
    }
}