#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;

    int e;
    for(int i = 0; i < n-1; i++){
        cin >> e;
        a.push_back(e);
    }
    sort(a.begin(), a.end());
    for(int i = 1; i <= n; i++){
        if(a[i-1] == i){
            continue;
        }
        else{ 
            cout << i << endl;
            break;
        }
    }
}