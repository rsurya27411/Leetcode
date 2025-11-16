class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans;
    vector<int> freq(n+1,0);
    for(int i=0;i<n;i++)
    freq[nums[i]]++;
    for(int i=0;i<n+1;i++)
    if(i!=0&&freq[i]==0)
    ans.push_back(i);
    //cout<<freq[i]<<endl;
    return ans;
    }
};