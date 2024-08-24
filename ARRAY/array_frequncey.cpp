#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int array[] = {1, 2, 2, 3, 4, 2, 5};
    int n = sizeof(array) / sizeof(array[0]);
    unordered_map<int, int> freqMap;
    for (int i = 0; i < n; ++i) {
        freqMap[array[i]]++;
    }
    cout << "Element frequencies:" << endl;
    for (const auto& pair : freqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
