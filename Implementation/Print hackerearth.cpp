#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    string str ;
    cin >> str;
    map<char, int> map;
    for(auto i : str){
        if(i == 'h')
            map[i]++;

        if(i == 'a')
            map[i]++;

        if(i == 'c')
            map[i]++;

        if(i == 'k')
            map[i]++;

        if(i == 'e')
            map[i]++;

        if(i == 'r')
            map[i]++; 

        if(i == 't')
            map[i]++;                    
    }
    
    
//    ll h, a, c, k, e, r, t;
//    string newStr = "hackert";


   map['h'] = map['h'] / 2;
   map['a'] = map['a'] / 2;
   map['c'] = map['c'];
   map['k'] = map['a'];
   map['e'] = map['e'] / 2;
   map['r'] = map['r'] / 2;
   map['t'] = map['t'];

   
    int value = map['h'];
  for(auto i : map){
      if(value > i.second)
        value = i.second;
    //cout << i.first << " " << i.second << endl;
  }
  cout << value << endl;
    
    
    
}