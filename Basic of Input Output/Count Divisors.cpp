#include<bits/stdc++.h>
#define ll long long int
#define loop(i, a, b) for(int i = a; i <= b; i++)
using namespace std;


int main(){
    int l, r, k;
    cin >> l >> r >> k;
    ll ans =  (r/k) - ((l - 1) / k);
    cout << ans;
    return 0;
}
