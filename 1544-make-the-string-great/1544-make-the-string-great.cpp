class Solution {
public:
    string makeGood(string s) {
        bool bad = true;

        while (bad) {
            bad = false;
            string result = "";

            for (int i = 0; i < s.size(); i++) {
                if (i + 1 < s.size() && tolower(s[i]) == tolower(s[i + 1]) && s[i] != s[i + 1]) {
                    bad = true;
                    i++; 
                } else {
                    result += s[i];
                }
            }

            s = result; 
        }

        return s;
    }
};
