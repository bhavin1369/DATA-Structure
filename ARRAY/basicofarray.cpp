#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class BasicArray {
private:
    vector<int> array;

public:
    // Constructor
    BasicArray(vector<int> arr) : array(arr) {}

    // Traversal
    void traverse() {
        for (int elem : array) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Searching an element
    int search(int value) {
        for (size_t i = 0; i < array.size(); ++i) {
            if (array[i] == value) {
                return i;
            }
        }
        return -1;
    }

    // Inserting an element at a specific index
    void insert(size_t index, int value) {
        if (index <= array.size()) {
            array.insert(array.begin() + index, value);
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    // Deleting an element at a specific index
    void deleteAt(size_t index) {
        if (index < array.size()) {
            array.erase(array.begin() + index);
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    // Delete all occurrences of a specific element
    void deleteAllOccurrences(int value) {
        array.erase(remove(array.begin(), array.end(), value), array.end());
    }

    // Obtain the frequency of all elements in the array
    unordered_map<int, int> elementFrequency() {
        unordered_map<int, int> freqMap;
        for (int elem : array) {
            freqMap[elem]++;
        }
        return freqMap;
    }
};

int main() {
    BasicArray arr({1, 2, 2, 3, 4, 2, 5});

    // Traversal
    arr.traverse();

    // Searching
    cout << "Search for 3: " << arr.search(3) << endl;

    // Insertion
    arr.insert(2, 10);
    arr.traverse();

    // Deletion
    arr.deleteAt(3);
    arr.traverse();

    // Delete all occurrences of 2
    arr.deleteAllOccurrences(2);
    arr.traverse();

    // Element frequency
    unordered_map<int, int> freq = arr.elementFrequency();
    cout << "Element frequencies:" << endl;
    for (const auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
