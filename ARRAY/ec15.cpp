#include<iostream>
using namespace std;
void two_sum(int size,int arr[],int key){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==key){
                cout<<"YES"<<endl;
                cout<<"["<<i<<","<<j<<"]";
                return;
            }
        }
    }
    cout<<"NO";
    cout<<"["<<-1<<","<<-1<<"]";
}
main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    two_sum(size,arr,key);
}