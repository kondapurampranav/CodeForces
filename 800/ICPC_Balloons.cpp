#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int l;
    string s;

    while(n--){
        
        cin >> l;
        cin >> s;
        int sum = 0;
        int arr[26] = {0};

        for(int i : s){
            
            if(arr[i - 'A'] == 0) arr[i - 'A']+=2;
            else arr[i - 'A']++;
        }

        for(int i=0;i<26;i++){
            sum += arr[i];
        }
        cout << sum << endl;

    }

    
    return 0;
}