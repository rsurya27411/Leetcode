class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        vector<int> ans;
        int n1=nums1.size(),n2=nums2.size();
        if(n1>n2){
        for(int i=0;i<nums1.size();i++)
        m[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i]) != m.end() && m[nums2[i]] != 0)
            {
                ans.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        }
        else{
        for(int i=0;i<nums2.size();i++)
        m[nums2[i]]++;
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i]) != m.end() && m[nums1[i]] != 0)
            {
                ans.push_back(nums1[i]);
                m[nums1[i]]--;
            }
        }
        }
    return ans;
    }
};