class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        multiset<int> s(nums.begin(),nums.end());
        long long score=0;
        while(k){
            auto it = prev(s.end());
            int val = *it;
            score += val;
            s.erase(it);
            s.insert(ceil((double)val/3));
            k--;
        }
        return score;
    }
};