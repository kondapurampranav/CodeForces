#include <iostream>
#include <cctype>
#include <string>
#include <string.h>
using namespace std;

int main(){
    string s1,s2;

    cin >> s1 >> s2;

    // for(int i=0;i<s1.length();i++){
    //     s1[i] = tolower(s1[i]);
    //     s2[i] = tolower(s2[i]);
    // }

    if(strcasecmp(s1.c_str(), s2.c_str()) < 0){
        cout << -1;
    }
    else if(strcasecmp(s1.c_str(), s2.c_str()) > 0){
        cout << 1;
    }
    else if(strcasecmp(s1.c_str(), s2.c_str()) == 0){
        cout << 0;
    }
    return 0;
}