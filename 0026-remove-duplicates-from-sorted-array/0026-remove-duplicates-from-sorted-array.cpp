class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int>v;
	long long dupli=INT_MIN;
	for(int i=0;i<nums.size();i++){
		if(nums[i]!=dupli){
			dupli=nums[i];
         v.push_back(dupli);
		}
	}
	
	for(int i=0;i<v.size();i++){
		nums[i]=v[i];
	}
	int x=v.size();

	return x;
}

    
};