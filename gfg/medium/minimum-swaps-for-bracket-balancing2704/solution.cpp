class Solution {
  public:
    int minimumNumberOfSwaps(string& s) {
        long long swaps = 0;
        int leftCount = 0, rightCount = 0;
        int imbalance = 0;

        for(char ch : s) {
            if(ch == '[') {
                leftCount++;

                if(imbalance > 0) {
                    swaps += imbalance;
                    imbalance--;
                }
            }
            else { // ch == ']'
                rightCount++;
                imbalance = rightCount - leftCount;
            }
        }

        return swaps;
    }
};