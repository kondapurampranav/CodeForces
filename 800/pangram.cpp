#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    cin >> s;

    int arr[26]={0};

    if(n<26){
        cout << "NO";
        return 0;
    }

    

    for(char i : s){
        arr[tolower(i)-'a']++;
    }

    for(int i : arr){
        if(i == 0){
            cout << "NO";
            return 0;
        }

    }

    cout << "YES";

    
    return 0;
}