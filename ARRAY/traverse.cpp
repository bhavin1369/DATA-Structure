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
};
    int main() {
    BasicArray arr({1, 2, 2, 3, 4, 2, 5});

    // Traversal
    arr.traverse();
    }
