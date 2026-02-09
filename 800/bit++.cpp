#include <iostream>
using namespace std;

int main(){
    int n,t=0;
    cin >> n;
    string x;

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