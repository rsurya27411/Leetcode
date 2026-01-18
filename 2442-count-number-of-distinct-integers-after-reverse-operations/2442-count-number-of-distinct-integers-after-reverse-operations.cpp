class Solution {
public:
int reverse(int n){
    int num=0;
    while(n){
        num=num*10 + n%10;
        n/=10;
    }
    return num;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int c=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            int num=reverse(nums[i]);
            mp[num]++;
            //cout<<num<<endl;
        }
        for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
        return mp.size();
    }
};