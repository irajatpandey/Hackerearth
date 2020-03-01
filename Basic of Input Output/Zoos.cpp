#include<bits/stdc++.h>
using namespace std;
string Zoos(int x, int y){
    if((2 * x) == y)
        return "Yes";
    else
        return "No";
}
int main(){
    string str;
    cin >> str;
    int x = 0, y = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'z')
            x++;
        else
            y++;
    }
    
    
    cout << Zoos(x, y);
}