#include <iostream>
using namespace std;

int main(){
    int n,c;

    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> c;
        int a=c/3,b=c/3;
        int sum = 2*a + 1*b;

        while(sum < c){
            if(c - sum >= 2){
                a++;
                sum+=2;
            }
            if(c != sum){
                b++;
                sum+=1;
            }
        }
        cout << b << " " << a << endl;
    }
    

    
    return 0;
}