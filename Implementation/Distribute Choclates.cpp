#include<bits/stdc++.h>
#define ll long long
using namespace std;
 

// k, k + 1, k + 2.....k + n - 1
// it could be written as c = n*k + n*(n - 1)/2 
// calculate value of k from equation 
// print the answer according to the question

int distribute(ll c, ll n)
{
    if((n*(n + 1) / 2) > c){
        return c;
    }
    else{
        ll k = (c - (n*(n -1)/2)) / n;  
        return c - n * k - (n * (n - 1) / 2) ;
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