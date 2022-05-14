#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int cc = 1, mx = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]){
            cc++;
        }
        else{
            mx = max(cc, mx);
            cc = 1;
        }
    }
    cout << mx << endl;
}