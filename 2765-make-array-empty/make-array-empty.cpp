class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> x(n);
        for (int i=0;i<n;i++) {
            x[i]=i;
        }
        sort(x.begin(), x.end(),[&](int a,int b) {
            return nums[a]<nums[b];
        });
        int m=n,l=0;
        long long ans=0;
        for (int i=1;i<n;i++) {
            if(x[i]<x[i-1]){
                ans+=m;
                m-=i-l;
                l=i; 
            }
        }
        return ans+m;
    }
};