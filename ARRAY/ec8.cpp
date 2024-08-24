
#include<iostream>
using namespace std;
int Linear_search(int size,int arr[],int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return 0;
}
main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[1]);
    int num=4;
    int result=Linear_search(size,arr,num);
    cout<<result;
}   