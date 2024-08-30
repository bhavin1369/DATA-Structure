#include <iostream>
#include <string>

using namespace std;

string longest_prefix(string sub1, string sub2, string sub3){
    int min,i,j,n1,n2,n3;
    if(n1<n2 && n1<n3){
        min = n1;
    }
    else if(n2<n1 && n2<n3){
        min = n2;
    }
    else{
        min = n3;
    }
    int count=0;
    for(int i=0;i<min;i++){
        if(sub1[i]==sub2[i] && sub1[i]==sub3[i]){
            cout<<sub1[i];
            count++; 
        }
        else{
            count=0;
            break;
        }
    }
    cout<<endl;
}

int main(){
    string s[3]={"bhavin","bhavesh","bhavlo"};
    int n1=s[0].length();
    cout<<n1<<endl;
    string sub1=s[0].substr(0,n1);
    cout<<sub1<<endl;
    int n2=s[1].length();
    cout<<n2<<endl;
    string sub2=s[1].substr(0,n2);
    cout<<sub2<<endl;
    int n3=s[2].length();
    cout<<n3<<endl;
    string sub3=s[2].substr(0,n3);
    cout<<sub3<<endl;
    longest_prefix(sub1,sub2,sub3);
    return 0;
}