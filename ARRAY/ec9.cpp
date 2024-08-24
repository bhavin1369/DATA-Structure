#include<iostream>
using namespace std;
int* Union(int size,int arr1[],int arr2[]){
    int i,j,k=0;
    static int temp[5];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                temp[k]={arr1[i]};
                k++;
            }
        }
    }
    return temp;
}
main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,4,5,6,7};
    int size=sizeof(arr1)/sizeof(arr1[1]);
    int* result=Union(size,arr1,arr2);
    for(int i=0;i<size;i++){  //errorMH
        cout<<result[i]<<" ";
    }
}