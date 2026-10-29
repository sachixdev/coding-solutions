#include <vector>
#include <unordered_map>

class Solution {
public:
    int findSubarray(std::vector<int> &arr) {
        std::unordered_map<long long, int> prefixMap;
        long long current_sum = 0;
        int count = 0;

        for (int num : arr) {
            current_sum += num;

            // If prefix sum is 0, we found a subarray starting from index 0
            if (current_sum == 0) {
                count++;
            }

            // If prefix sum has been seen before, add its frequency
            if (prefixMap.find(current_sum) != prefixMap.end()) {
                count += prefixMap[current_sum];
            }

            // Store/update the frequency of current prefix sum
            prefixMap[current_sum]++;
        }

        return count;
    }
};