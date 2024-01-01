class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
       sort(g.begin(), g.end(), [](int a, int b) {
        return a > b; 
    });
        int count=0;
        sort(s.begin(),s.end());
        int i=0,j=m-1;
        while(i<n && j>=0){
if(s[j]>=g[i]){
    i++;
    j--;
    count++;
}
else{
    i++;
}

        }
        return count;
    }
};