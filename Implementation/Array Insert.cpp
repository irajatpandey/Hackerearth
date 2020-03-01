#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll size, queries;
    cin >> size >> queries;
    vector<ll> v(size);

    for(int i = 0; i < size; i++)
        cin >> v[i];

    ll typeOfQuery, left, right;
    while(queries--){
        ll sum = 0;
        cin >> typeOfQuery >> left >> right;

        if(typeOfQuery == 1){
            v[left] = right;

        }
        else if(typeOfQuery == 2){
            for(int i = left; i <= right; i++)
                sum += v[i];
            cout << sum << endl;

        }


    }


}