#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;

    int amount = 0,borrow;

    amount = (w*(w+1)/2)*k;

    borrow = amount - n;

    if(borrow<0){
        cout << '0';
        return 0;
    }
    cout << borrow;
    return 0;
}