class Solution {
  public:
    int secFrequent(vector<string> &arr) {
        unordered_map<string, int> freq;

        // Count frequencies
        for (string &s : arr) {
            freq[s]++;
        }

        // If only one unique string
        if (freq.size() < 2) {
            return -1;
        }

        int first = 0, second = 0;

        for (auto &it : freq) {
            int f = it.second;

            if (f > first) {
                second = first;
                first = f;
            }
            else if (f > second && f < first) {
                second = f;
            }
        }

        return (second == 0) ? -1 : second;
    }
};