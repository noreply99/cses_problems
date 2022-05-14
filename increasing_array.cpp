#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a;
    int e;
    for(int i=0; i<n; i++){
        cin>>e;
        a.push_back(e);
    }
    int c = 0;
    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            c += abs(a[i] - a[i+1]);
            a[i] = a[i+1];
        }
    }
    cout << c << endl;
    return 0;
}