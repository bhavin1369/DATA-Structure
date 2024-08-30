#include <iostream>
#include <string>

using namespace std;
void anagram(){
    string s1="Bhavin";
    string s2="nivahb";
    int i,j,count=0;
    int n1=s1.length();
    int n2=s2.length();
    char arr1[n1],arr2[n2];
    if(n1==n2){
        cout<<"first array is :"<<endl;
        for(i=0;i<n1;i++){
        arr1[i]=s1[i];
        cout<<arr1[i];
    }
    cout<<endl;
    cout<<"second array is :"<<endl;
    for(i=0;i<n1;i++){
        arr2[i]=s2[i];
        cout<<arr2[i];
    }
    cout<<endl;
    for(i=0;i<n1;i++){
        for(j=0;j<n1;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
    }
    if(count==n1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    }
    
}
int main(){
    anagram();
}