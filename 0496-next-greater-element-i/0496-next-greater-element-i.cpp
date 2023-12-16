class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        
       
        for(int i=0;i<nums1.size();i++){
             int maxright=nums1[i];
            int index=nums2.size();
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    index=j;
                }
                if(j>index && maxright<nums2[j]) {
                    maxright=nums2[j];
                   v.push_back(maxright);
                    break;
                }
            }
            if(maxright==nums1[i]){
                v.push_back(-1);
            }
        }
        return v;
    }
};