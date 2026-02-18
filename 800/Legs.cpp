#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int legs,animals;

    for(int i=0;i<n;i++){
        cin >> legs;

        animals = legs/4;
        if(legs%4!=0) animals++;

        cout << animals << endl;

    }
    return 0;
}