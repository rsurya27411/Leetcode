class Solution {
public:
  int encrypt(int x)
      {
      int c=0,maxi=0,num=0;
      while(x)
          {
          int r=x%10;
          maxi=max(maxi,r);
          c++;
          x/=10;
      }
      for(int i=0;i<c;i++)
          num=num*10+maxi;
      return num;
  }
    int sumOfEncryptedInt(vector<int>& nums) {
    int s=0;
for(int i=0;i<nums.size();i++)
    s+=encrypt(nums[i]);
    return s;
    }
};