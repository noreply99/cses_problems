#include <iostream>
using namespace std;
bool checkSorted(int a[], int n, int& c){
    
    if(n==0){
        return 1;
    }
    if(a[0] > a[1]){
        a[1]++;
        c++;
    }
    return (a[0]<=a[1] && checkSorted(a++, n-1, c));
}
int main(){

    int n;
    cin >> n;
    int c = 0;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    do{
        checkSorted(arr, n-1, c);
    }while(!checkSorted(arr, n-1, c));
    cout << c << endl;
    return 0;
}