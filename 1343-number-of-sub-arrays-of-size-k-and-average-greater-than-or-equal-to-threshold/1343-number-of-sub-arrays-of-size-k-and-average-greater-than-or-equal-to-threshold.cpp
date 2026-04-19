class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int i=0,j=0,c=0,sum=0;
        while(j<arr.size())
        {
            sum+=arr[j];
            if((j-i+1) == k)
            {
                if(sum/k >= th)
                c++;
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return c;
    }
};