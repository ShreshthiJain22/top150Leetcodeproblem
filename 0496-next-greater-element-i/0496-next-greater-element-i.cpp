class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int index=m;
            bool find=false;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    index=j;
                }
                if(j>index && nums2[j]>nums1[i]){
                    find=true;
                    v.push_back(nums2[j]);
                    break;
                }
            }
            if(find==false){
                v.push_back(-1);
            }
        }
        return v;
    }
};