#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;
    cin >> n;
    vector<long long int> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
        
    int value = v[n - 1];
    
    
    if(value % 10 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}