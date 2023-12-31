class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        int len = -1;

        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (s[i] == s[j]) {
                    len = max(len, j - i - 1);
                    break;
                }
            }
        }

        return len;
    }
};