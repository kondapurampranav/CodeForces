#include <iostream>
using namespace std;

int main(){
    long long n,k,x,ans;

    cin >> n >> k;

    x = (n+1)/2;

    if(k<=x){
        ans = 1 + (k-1)*2;
    }
    else{
        ans = 2 + ((k-x)-1)*2;
    }

    cout << ans;


    return 0;
}