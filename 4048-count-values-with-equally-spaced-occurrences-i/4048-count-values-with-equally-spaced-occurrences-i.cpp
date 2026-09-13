class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        set<int> s;
        vector<int> freq(101,0);
        int c=0;
        for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k]){
                        if(freq[nums[i]] == 3){
                            if(j - i == k - j) c++;
                        }
                    }
                }
            }
        }
        return c;
    }
};