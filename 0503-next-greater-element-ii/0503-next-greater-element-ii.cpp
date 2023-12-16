#include <vector>
#include <limits.h>

class Solution {
public:
    std::vector<int> nextGreaterElements(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> v;
        
        for (int i = 0; i < n; i++) {
            int maxleft = INT_MIN;
            int maxright = INT_MIN;
            
            for (int j = 0; j < i; j++) {
                if (nums[j] > nums[i]) {
                    maxleft = nums[j];
                    break;
                }
            }

            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    maxright = nums[j];
                    break;
                }
            }

            if (maxright == INT_MIN && maxleft == INT_MIN) {
                v.push_back(-1);
            } else if (maxright == INT_MIN) {
                v.push_back(maxleft);
            } else {
                v.push_back(maxright);
            }
        }
        
        return v;
    }
};



