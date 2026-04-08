#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    int remaining;
    int required;

    while(t--){
        cin >> n;
        remaining = n%3;

        if(remaining == 0){
            required = 0;
        }
        else{
            required = 3 - remaining;
        }
        cout << required << endl;

    }


    return 0;
}