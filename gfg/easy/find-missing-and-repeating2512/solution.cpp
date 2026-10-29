#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> findTwoElement(std::vector<int>& arr) {
        int n = arr.size();
        int repeating = -1;
        int missing = -1;

        // Step 1: Find the repeating number by marking indices as negative
        for (int i = 0; i < n; i++) {
            int val = std::abs(arr[i]);
            if (arr[val - 1] < 0) {
                repeating = val;
            } else {
                arr[val - 1] = -arr[val - 1];
            }
        }

        // Step 2: Find the missing number (the index that remains positive)
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {repeating, missing};
    }
};