#include<iostream>
using namespace std;
void detect(int &size,int arr[]){
    int pos=0,i;
    for(i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            pos=i+1;
            for(int i=pos;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
        }
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
main(){
    int arr[10]={1,2,3,4,4,5,6,7,7,9};
    int size=sizeof(arr)/sizeof(arr[1]);
    detect(size,arr);
}