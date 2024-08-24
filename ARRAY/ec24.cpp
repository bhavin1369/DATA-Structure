#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int longestConsecutiveSequence(vector<int>& arr) {
    unordered_set<int> elements(arr.begin(), arr.end());
    int longestStreak = 0;
    for (int num : elements) {
        if (elements.find(num - 1) == elements.end()) {
            int currentNum = num;
            int currentStreak = 1;
            while (elements.find(currentNum + 1) != elements.end()) {
                currentNum++;
                currentStreak++;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}
int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int result = longestConsecutiveSequence(arr);
    cout << "Length of the longest consecutive sequence is " << result << endl;
    return 0;
}
