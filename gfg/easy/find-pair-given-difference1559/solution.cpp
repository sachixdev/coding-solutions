#include <vector>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool findPair(std::vector<int> &arr, int x) {
        std::unordered_set<int> seen;

        for (int num : arr) {
            // Check if there is an element such that |num - element| = x
            if (seen.count(num + x) || seen.count(num - x)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};