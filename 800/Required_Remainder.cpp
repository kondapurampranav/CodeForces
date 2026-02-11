#include <iostream>
using namespace std;

int main(){
    int l,x,y,n;

    cin >> l;
    int k;
    for(int i=0;i<l;i++){
        cin >> x >> y >> n;
        k  = ((n/x)*x) + y;     
        if(k > n){
            k -= x;
        }
        cout << k << endl;
        }
    
    
    return 0;
}

