class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        int n=gain.size();
        int i;
        ans.push_back(0);
        for(i=0;i<n;i++)
            {
        int a=ans[i]+gain[i];
            ans.push_back(a);
        }
     int n1=ans.size();   sort(ans.begin(),ans.end());
        return ans[n1-1];
    }
};