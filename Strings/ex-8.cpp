#include <iostream>
#include <string>
using namespace std;
void reverseWord(string& s, int start, int end) {
    while(start<end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
string reverseWords(string s) {
    int n=s.length();
    int start=0;
     for (int end = 0; end <= n; end++) {
        if (end == n || s[end] == ' ') {
            reverseWord(s,start,end - 1); 
            start = end + 1; 
        }
    }
    return s;
}

int main() {
    string s = "Bhavin Muchhala";
    string reversedString = reverseWords(s);
    cout <<reversedString<<endl;
    return 0;
}