#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int i = a; i <=b; i++)
using namespace std;
int main(){
    string str;
    cin >> str;
    ll c1 = 0, c2 = 0;
    for(auto i : str){
        if(i == 'L')
            c1--;
        else if(i == 'R')
            c1++;
        else if(i == 'U')
            c2++;
        else if(i == 'D')
            c2--;
    }
    cout << c1 << " " << c2 << endl;
}