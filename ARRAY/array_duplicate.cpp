//Remove duplicate from shorted array
#include<iostream>
using namespace std;
void detect(int &size,int arr[]){
    int Duplicate,i;
    for(i=0;i<size-1;i++){
        int x=arr[i];
        for(int j=i+1;j<size;j++){
            if(x==arr[j]){
                Duplicate=arr[j];
            }
        }
    }
    cout<<Duplicate;
}
main(){
    int arr[11]={10,2,4,5,8,9,6,3,3,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    detect(size,arr);
}