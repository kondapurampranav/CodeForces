#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    int i=n+1;

    while(1){
        s = to_string(i);
        unordered_set<char> set;

        for(char i : s){
            set.insert(i);
        }

        if(set.size() == 4){
            cout << i;
            break;
        } 
        i++;
    }
    return 0;
}