class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1;
        int count = 0;

        // Step 1: Find potential candidate
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Step 2: Verify candidate
        int actualCount = 0;
        for (int num : arr) {
            if (num == candidate) {
                actualCount++;
            }
        }

        if (actualCount > arr.size() / 2) {
            return candidate;
        }

        return -1;
    }
};