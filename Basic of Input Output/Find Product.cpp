#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
using namespace std;
int main(){
    ll n ;
    ll ans = 1;
    cin >> n;
    while(n--){
        ll val;
        cin >> val;
        
        ans = (ans * val) % MOD;
    }
    cout << ans << endl;
}