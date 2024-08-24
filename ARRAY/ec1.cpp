#include<iostream>
using namespace std;
int maximum(int size,int arr[]){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[1]);
    int max=maximum(size,arr);
    cout<<"Maximum Number is:"<<max;
    return 0;
}