#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int kthElement(std::vector<int>& a, std::vector<int>& b, int k) {
        int n = a.size();
        int m = b.size();

        // Ensure array 'a' is the smaller array to minimize binary search range
        if (n > m) {
            return kthElement(b, a, k);
        }

        // Search boundaries for picking elements from 'a'
        int low = std::max(0, k - m);
        int high = std::min(k, n);

        while (low <= high) {
            int cut1 = low + (high - low) / 2;
            int cut2 = k - cut1;

            int left1 = (cut1 == 0) ? INT_MIN : a[cut1 - 1];
            int left2 = (cut2 == 0) ? INT_MIN : b[cut2 - 1];

            int right1 = (cut1 == n) ? INT_MAX : a[cut1];
            int right2 = (cut2 == m) ? INT_MAX : b[cut2];

            // Valid partition found
            if (left1 <= right2 && left2 <= right1) {
                return std::max(left1, left2);
            }
            // Move left in array 'a'
            else if (left1 > right2) {
                high = cut1 - 1;
            }
            // Move right in array 'a'
            else {
                low = cut1 + 1;
            }
        }

        return -1;
    }
};