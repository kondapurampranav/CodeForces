#include <iostream>
using namespace std;

int main(){
    long long m,n,a;
    cin >> m >> n >> a;

    long long s,r;

    s = m/a;
    if(m%a!=0){
        s++;
    }
    // or (m+a-1/a)

    r = n/a;
    if(n%a!=0){
        r++;
    }
    // or (n+a-1/a)
    
    long long t = s*r;
    cout << t;
    return 0;
}
