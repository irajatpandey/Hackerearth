#include<bits/stdc++.h>
using namespace std;
int main(){
    int SH, SM, EH, EM;
    int totalStartingMinute;
    int totalEndingMinute;
    
    int t;
    cin >> t;
    while(t--){
        cin >> SH >> SM >> EH >> EM;
        totalStartingMinute = SH * 60 + SM;
        totalEndingMinute = EH * 60 + EM;
        
        int result = totalEndingMinute - totalStartingMinute;
        //cout << result << endl;
        if((result / 60) == 0)
            cout << "0" << " " << result << endl;
        else{
            int hour = result / 60;
            cout << hour << " " << (result % 60) << endl;
        }
        
    }
    return 0;
}