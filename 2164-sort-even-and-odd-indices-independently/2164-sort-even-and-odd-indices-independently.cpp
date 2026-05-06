class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        for(i=0;i<n;i=i+1)

    {

    int t=0;

    for(j=i;j<n;j=j+1)

    {

    if(i%2==0&&j%2==0)

    {

        if(nums[i]>nums[j])

        {

        t=nums[i];

        nums[i]=nums[j];

        nums[j]=t;

        }

    }

    else if(i%2!=0&&j%2!=0)

    {

    if(nums[i]<nums[j])

        {

        t=nums[i];

        nums[i]=nums[j];

        nums[j]=t;

        }

    }

    }

    }
      return nums;
    }
};