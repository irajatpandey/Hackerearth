#include <bits/stdc++.h>
#define loop(i,a,b) for(int i = a; i <= b; i++)
#define ll long long int
using namespace std;

int countDigit(long long n) { 
    return floor(log10(n) + 1); 
} 

int main(){
    
    ll n;
    cin >> n;
    
    int digit = countDigit(n);
    ll finalOutput = 0;
    int val = digit;
    loop(i, 1, digit){
        int r = n % 10;
        finalOutput += r * val;
        val--;
    }
    if(finalOutput % 11 == 0)
        cout << "Legal ISBN" << endl;
    else
        cout << "Illegal ISBN" << endl;
    
}