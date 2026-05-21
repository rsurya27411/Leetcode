class Solution {
public:
    int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        a=nums;
        vector<vector<int>> ans;
        for(int i=0;i<factorial(n);i++)
        {
            next_permutation(a.begin(),a.end());
            ans.push_back(a);
        }
        return ans;
    }
};