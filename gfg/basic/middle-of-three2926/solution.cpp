class Solution {
  public:
    int middle(int a, int b, int c) {
        // Check if 'a' is the middle element
        if ((a > b && a < c) || (a < b && a > c))
            return a;
        // Check if 'b' is the middle element
        else if ((b > a && b < c) || (b < a && b > c))
            return b;
        // Otherwise, 'c' must be the middle element
        else
            return c;
    }
};