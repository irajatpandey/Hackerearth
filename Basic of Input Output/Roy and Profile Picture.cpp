#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int i = a; i <=b; i++)
using namespace std;

int main(){
    ll L;
    int N;
    cin >> L >> N;
    while(N--){
        ll W, H;
        cin >> W >> H;
        if(W >= L and H >= L){
            if(W == L and H == L)
                cout << "ACCEPTED\n";
            else if(W == H)
                cout << "ACCEPTED\n";
            else   
                cout << "CROP IT" << endl;
        }
        else
            cout << "UPLOAD ANOTHER" << endl;
    }
    return 0;
}