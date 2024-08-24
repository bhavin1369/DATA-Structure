#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCounts;
    prefixSumCounts[0] = 1;
    int prefixSum = 0;
    int count = 0;
    for (int num : nums) {
        prefixSum += num;
        if (prefixSumCounts.find(prefixSum - k) != prefixSumCounts.end()) {
            count += prefixSumCounts[prefixSum - k];
        }
        prefixSumCounts[prefixSum]++;
    }
    return count;
}

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout << "Number of subarrays with sum " << k << ": " << subarraySum(nums, k) << endl;
    return 0;
}
