#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a,b,diff;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        diff = abs(b-a);

        cout << (diff%10==0 ? diff/10 : (diff/10)+1) << endl;
    }
    return 0;
}