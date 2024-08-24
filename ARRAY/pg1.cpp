#include<iostream>
#include<vector>
using namespace std;
int main() {
    int a[]={1,2,3,4,5};
    int max = a[0];
    int n=5
    for(int i=1; i<n; i++){ 
        if(a[i] > max){
            max = a[i];
        }
    }
    cout << "Maximum element: " << max << endl;
    return 0;
}