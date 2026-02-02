class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        map<int,int> mp;
        sort(divisors.begin(),divisors.end());
        for(int i=0;i<divisors.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j] % divisors[i] == 0)
                c++;
            }
            mp[divisors[i]]=c;
        }
        int ans=0,val=INT_MIN;
        for(auto it : mp){
            if(it.second > val){
                ans=it.first;
                val=it.second;
            }
        }
        return ans;
    }
};