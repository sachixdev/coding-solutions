class Solution {
public:
    vector<int> singleNum(vector<int>& arr) {

        int xorAll = 0;

        // XOR of all elements
        for(int num : arr)
            xorAll ^= num;

        // Rightmost set bit
        int setBit = xorAll & (-xorAll);

        int x = 0, y = 0;

        // Divide into two groups
        for(int num : arr) {

            if(num & setBit)
                x ^= num;
            else
                y ^= num;
        }

        if(x > y)
            swap(x, y);

        return {x, y};
    }
};