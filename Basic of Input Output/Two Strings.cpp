#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int i = a; i <= b; i++)
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        unordered_map<char, int> m;
        
        for(auto i : str1)
            m[i]++;
            
        for(auto i : str2)
            m[i]--;
            
        bool flag = true;    
        
        for(auto i : m){
            if(i.second != 0){
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
    }
    return 0;
}