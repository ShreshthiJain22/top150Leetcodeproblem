class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        int n=arr.size();
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        set<int>s;
        for(auto entry:m){
            s.insert(entry.second);
        }
        if(s.size()==m.size()){
            return true;
        }
        return false;
    }
};