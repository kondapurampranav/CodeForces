#include <iostream>
using namespace std;

int main(){
    int t,n,sum;
    cin >> t;
    int arr[50];

    for(int i=0;i<t;i++){
        cin >> n;
        sum = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        cout << (sum%2==0 ? "YES" : "NO") << endl;
    }

    

    return 0;
}