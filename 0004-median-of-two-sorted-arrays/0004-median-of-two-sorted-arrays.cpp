class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
       int n1=nums1.size();
       int n2=nums2.size();
       int i,a=0,b=0;
        double s=0;
       for(i=0;i<n1;i++)
     ans.push_back(nums1[i]);
       for(i=0;i<n2;i++)
     ans.push_back(nums2[i]);
sort(ans.begin(),ans.end());
        int n3=ans.size();
        if(n3%2!=0){
        a=(n3+1)/2;
        return ans[a-1];}
        else
            {
            a=n3/2;
            b=a-1;
s=(double)(ans[a]+ans[b])/2;
            return s;
        }
    }
};