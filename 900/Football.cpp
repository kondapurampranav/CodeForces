#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.length() < 7){
        cout << "NO";
        return 0;
    }

    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == s[i+1]){
            count++;
            if(count == 6){
                cout << "YES";
                return 0;
            }
            
        }
        else count = 0;
    }
    cout << "NO";
    return 0;
}

// 0 1 1 1 1 1 1 1 0