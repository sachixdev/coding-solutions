class Solution {
  public:
    string isAutomorphic(int n) {
        int square = n * n;
        int temp = n;

        while (temp > 0) {
            if ((temp % 10) != (square % 10))
                return "Not Automorphic";

            temp /= 10;
            square /= 10;
        }

        return "Automorphic";
    }
};