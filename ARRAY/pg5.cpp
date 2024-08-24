#include <iostream>
using namespace std;

void traversal(int a[], int& size, int i, int d) {
    for(i=0;i<d;i++){
    size++;
    }
    for(i=0;i<d;i++){
        a[size]=a[i];
    for(int j=d;j<size;j++){
        a[j]=a[j+d];
    }
    }
    for(i=size;i>d;i--){
    size--;}
    for(i = 0; i <size; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int i = 0;
    int d = 3;
    traversal(a, size, i, d);
    return 0;
}