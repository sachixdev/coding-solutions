class Solution {
public:
    int inSequence(int a, int b, int c) {
        if (c == 0) {
            return a == b;
        }

        // Check if b lies in the direction of common difference c
        // and (b - a) is a multiple of c
        if ((b - a) % c == 0 && (b - a) / c >= 0) {
            return 1;
        }

        return 0;
    }
};