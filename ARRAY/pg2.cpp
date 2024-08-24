#include <iostream>
using namespace std;

bool hasPairWithSum(int arr[], int n, int sum) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    int arr[] = {1, 4, 45, 6, 10, 8, 8};
    int sum = 16;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (hasPairWithSum(arr, n, sum))
        cout << "Array has two elements with sum " << sum << endl;
    else
        cout << "Array doesn't have two elements with sum " << sum << endl;

    return 0;
}