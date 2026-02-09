#include <iostream>
using namespace std;

int main(){
    int n,t;
    cin >> n;
    string x;
    t=0;

    for(int i=0;i<n;i++){
        cin >> x;

        if(x[1] == '+'){
            ++t;
        }
        else if(x[1] == '-'){
            --t;
        }
        
    }
    cout << t;

    return 0;
}