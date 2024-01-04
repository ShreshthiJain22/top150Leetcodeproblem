class Solution {
public:
    int minOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int count=0;
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]+=1;
        }
        for(const auto&pair :m){
            int occ=pair.second;
            if(occ%3==0){
                count+=occ/3;
                
            }
            else if(occ/3>=2){
                count+=occ/3+1;
            }
            else if(occ/2){
                count+=occ/2;
            }
            else{
                return -1;
            }
        }
        
       return count;
        
    }
};