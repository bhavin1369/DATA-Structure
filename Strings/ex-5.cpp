#include <iostream>
#include <string>

using namespace std;

void str() {
    string s1 = "BHAVIN";
    int n = s1.length();
    char s2[6] = {0};   
    char s3[6] = {0};   
    char temp[6] = {0}; 

    int i,count=0,j;
    for(i=0;i<n;i++) {
        s2[i] = s1[i];
        cout << s2[i];
    }  
    cout << endl;
    for(i = 0; i < n; i++) {
        temp[i]=s2[i];
    }
    cout << temp << endl;
    for(i=0;i<n;i++) {
        s3[n-i-1] = s2[i];
    }
     for(i=0;i<n;i++) {
         cout<<s3[i];
    }
    cout << endl;
    int n1=6;
    if(n==n1){
        for(i=0;i<n;i++){
            if(s3[n1-i-1]==temp[i]){
                count++;
            }
            else{
                count=0;
                break;
            }
        }
        if (n==count) {
             cout << "Given string is a rotation of the original string" << endl;
         } 
         else {
             cout << "Given string is not a rotation of the original string" << endl;
         }

    }
    else{
        cout<<"string is not valid";
    }
}


int main() {
    str();
    return 0;
}
