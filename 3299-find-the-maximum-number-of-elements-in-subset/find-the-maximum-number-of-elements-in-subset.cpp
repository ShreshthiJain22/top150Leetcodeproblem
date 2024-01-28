class Solution {
public:
    int maximumLength(vector<int>& n) {
        unordered_map<long long,int> um;
        for(auto val:n){
            um[val]++;
        }
        // if(um.size()==1){return 1;} //yeh condition jaruri nhi 
        
        int cnt=0;
        int ans=1;
        
        for(auto val:um){
                // .5 = 1/2 which is square root
                long long fnd = pow(val.first,.5);
                cnt=1;

                // yha condition greater than equal 2 isiliye rkha 
                // to avoid the infinite loop as use calculator
                // and find root(2)->root(root(2))...so on
                // it will never end
                while(fnd >= 2){
                    if(um.find(fnd) != um.end()){    
                        if(um[fnd] >= 2){
                            cnt+=2;
                        }
                        else{
                            break;
                        }
                        fnd=pow(fnd,.5);                        
                    }
                    else{
                        break;
                    }
                }
                ans = max(ans,cnt);
                cnt=0;
        }
        int maxi=0;
        if(um.find(1)!=um.end()){
            maxi = um[1];
        }
        if(maxi > ans){
            if(maxi & 1){return maxi;}
            return maxi-1;
        }
        return ans;
    }
};