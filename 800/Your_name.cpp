#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n,l;
    string s,t;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> l;
        cin >> s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        cout << ((s == t) ? "YES" : "NO") << endl;
    }
    return 0;
}