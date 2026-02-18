#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;

    while(n--){
        cin >> s;
        cout <<(s[0] == 'a' || s[1] == 'b' || s[2] == 'c' ? "YES" : "NO") << endl;
    }
         
    
    return 0;
}