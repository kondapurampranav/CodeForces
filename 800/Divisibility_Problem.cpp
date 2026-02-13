#include <iostream>
using namespace std;

int main(){
    int n;
    int a,b;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a >> b;

        if(a>b){
            
            cout <<(a%b==0 ? 0 : b-(a%b)) << endl;
        }

        else cout << b - a << endl;
    }
    return 0;
}