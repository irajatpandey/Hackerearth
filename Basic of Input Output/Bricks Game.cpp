#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin >> n;
    int i = 1;
    while(n > 0){
        n = n - i;
        if(n <=0 ) {cout << "Patlu" << endl; break;}
        
        n = n - (2 * i);
        if(n <= 0) {cout << "Motu" <<  endl; break;}
        i++;
        
    }
    return 0;
}