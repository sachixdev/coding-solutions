class Solution {
  public:
    bool isDisarium(int n) {
        string s = to_string(n);
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';
            sum += pow(digit, i + 1);
        }

        return sum == n;
    }
};