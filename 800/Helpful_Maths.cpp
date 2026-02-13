#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s,t;
    cin >> s;

    for(int i=0;i<s.size();i++){
        if(s[i] == '+') continue;
        else t += s[i]; 
    }

    sort(t.begin(), t.end());

    for(int i=0;i<t.size();i++){
        cout << t[i];
        if(i!=t.size()-1) cout << "+"; 
    }
    
    
    return 0;
}