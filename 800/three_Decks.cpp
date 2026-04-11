#include <iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;

    long long a, b, c;

    while(t--){
        cin >> a >> b >> c;
        
        int fc = c - (b-a);

        if(fc < b){
            cout << "NO" << endl;
            continue;
        }

        if((fc - b) % 3 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}