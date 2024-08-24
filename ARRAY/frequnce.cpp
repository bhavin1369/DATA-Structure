#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    // Sample array
    vector<int> array = {1, 2, 2, 3, 4, 2, 5};

    // Frequency map
    unordered_map<int, int> freqMap;

    // Count frequencies
    for (int num : array) {
        freqMap[num]++;
    }

    // Print frequencies
    cout << "Element frequencies:" << endl;
    for (const auto& pair : freqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
