#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int i = a; i <= b; i++)
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    loop(i,0,n -1)
        cin >> v[i];
        
    loop(i, 0, n -1)
        cout << v[i] << " ";
        
    return 0;    
}