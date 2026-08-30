class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=nums[0],maxi=nums[0];
        int minidx=0,maxidx=0,n=nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i] < mini){
                mini=nums[i];
                minidx=i;
            }
            if(nums[i] > maxi){
                maxi=nums[i];
                maxidx=i;
            }
        }
        cout<<minidx<<" "<<maxidx;
        int left = max(minidx, maxidx) + 1;

    // Dono ko right se remove karo
    int right = n - min(minidx, maxidx);

    // min left se, max right se
    int oneLeftOneRight =
        minidx + 1 + n - maxidx;

    // max left se, min right se
    int otherLeftOtherRight =
        maxidx + 1 + n - minidx;

    return min({
        left,
        right,
        oneLeftOneRight,
        otherLeftOtherRight
    });
    }
};