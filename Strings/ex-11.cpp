#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int St_To_Int(string s) {
    if(s.size()==0){
        return 0;
    }
    int index=0,sign=0,ans=0;
    for(int i= index;i<s.size();i++)
    {
        if(s[i]==' '){
            index++;
        }
        else{
            break;
        }

    }
    for(int i=index;i<s.size();i++){
        if(s[i]=='-'){
            if(sign==0){
                sign=1;
            }
            else{
                sign++;
            }
            index++;
        }
        else if(s[i]=='+'){
            if(sign==0){
                sign=2;
            }
            else{
                return 0;
            }
            index++;
        }
        if(sign>2){
            return 0;
        }
        for(int i=index;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
            }
            else{
                break;
            }
        }
        if(sign==1){
            ans*=(-1);
        }
        if(ans<INT_MIN)return INT_MIN;
        else if(ans>INT_MAX)return INT_MAX;
        else{
            return ans;
        }
    }

    
}

int main() {
    string s = "-5";
    cout << St_To_Int(s) << endl;
    return 0;
}