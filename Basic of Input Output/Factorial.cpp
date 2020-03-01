#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int i = a; i <= b; i++)
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll i = 1;
    ll ans = 1;
    loop(i, ans, n)
        ans = ans * i;
    cout << ans << endl;    
}