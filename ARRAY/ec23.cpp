#include <iostream>
#include <vector>
using namespace std;
void printLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int max_from_right = arr[n - 1];    
    leaders.push_back(max_from_right);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders.push_back(max_from_right);
        }
    }
    for (int i = leaders.size() - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
}
int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    printLeaders(arr);
    return 0;
}
