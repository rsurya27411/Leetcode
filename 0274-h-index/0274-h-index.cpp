class Solution {
public:
    int hIndex(vector<int>& citations) {
    int ans=1;
    int end=*max_element(citations.begin(),citations.end());
    for(int i=1;i<=end;i++){
        int c=0;
        for(int j=0;j<citations.size();j++)
        if(citations[j]>=i)
        c++;
        if(c>=i)
        ans=i;
        cout<<i<<" "<<c<<" "<<ans<<endl;
    }
    return ans;
    }
};