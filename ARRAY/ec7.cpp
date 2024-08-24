#include <iostream>
#include <vector>
using namespace std;
void end(vector<int>& arr) {
    int x = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != 0) {
            arr[x++] = arr[i];
        }
    }
    while (x < arr.size()) {
        arr[x++] = 0;
    }
}
int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    end(arr);
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
