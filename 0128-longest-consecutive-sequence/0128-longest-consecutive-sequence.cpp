class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        s.insert(nums[i]);
        
        int ans=1,c=1;

        for(auto it : s){

            int prev=it - 1;
            
            if(s.find(prev) != s.end()) continue;

            int next=it + 1;
            c=1;
            while(s.find(next) != s.end()){
                c++;
                next++;
            }
            
            ans=max(ans,c);
        }
        return ans;
    }
};