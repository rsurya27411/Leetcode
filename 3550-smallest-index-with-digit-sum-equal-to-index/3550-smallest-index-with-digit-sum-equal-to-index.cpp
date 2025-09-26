class Solution {
public:
int digsum(int dig){
    int sum=0;
    while(dig){
        sum+=(dig%10);
        dig/=10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(digsum(nums[i]) == i)
            return i;
        }
        return -1;
    }
};