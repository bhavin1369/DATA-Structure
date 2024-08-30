#include <iostream>
#include <string>
using namespace std;
string frequencySort(string s)
{
    int freq[256] = {0};
    for(int i =0;i<s.length(); i++)
    {
        freq[s[i]]++;
    }
    string result = "";
    for (int i=255; i>=0; --i)
    {
        if(freq[i]>0)
        {
            result+=string(freq[i],(char)i);
        }
    }
    return result;
}
int main()
{
    string s = "abcccdde";
    string result = frequencySort(s);
    cout << "Sorted by frequency: " << result << endl;
    return 0;
}