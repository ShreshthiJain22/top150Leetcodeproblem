class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dupli = 0;
        int absent = 0;
        int n = nums.size();
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            v[nums[i] - 1]++;
        }

        for (int i = 0; i < n; i++) {
            if (v[i] == 2) {
                dupli = i + 1;
            }
            if (v[i] == 0) {
                absent = i + 1;
            }
        }

        vector<int> ans = {dupli, absent};
        return ans;
    }
};
