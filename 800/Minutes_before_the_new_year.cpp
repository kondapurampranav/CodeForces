#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int h,m,time,remain;
    int total = 24*60;

    while(n--){
        cin >> h >> m;

        time = h*60 + m;
        remain = total - time;
        cout << remain << endl;
    }
    return 0;
}