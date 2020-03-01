#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int distribute(ll c, ll n)
{
    ll sum = (n*( n + 1 )) / 2;
    
    if(c < sum)
    return c;
    else
    {
        c = c - sum;
        return c % n;
    }
}
 
int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        ll c;
        ll n;
        cin >> c >> n;
        cout << distribute(c,n) << endl;
    }
    return 0;
}