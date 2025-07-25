class Solution {
public:
    bool isValid(vector<int>& weights, int days,int maxiweight)
    {
        int weight=weights[0],day=1;
        for(int i=1;i<weights.size();i++)
        {
            if(weights[i] > maxiweight)return false;
            if(weight + weights[i] <= maxiweight)
            weight+=weights[i];
            else
            {
                day++;
                weight=weights[i];
            }
        }
        return day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        if(days > weights.size())return -1;
        int maxi=0;
        for(int i=0;i<weights.size();i++)
        maxi+=weights[i];
        int i=*max_element(weights.begin(),weights.end());
        int j=maxi,ans=-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            cout<<i<<" "<<mid<<" "<<j<<endl;
            if(isValid(weights,days,mid))
            {
                ans=mid;
                j=mid-1;
            }
            else
            i=mid+1;
        }
        return ans;
    }
};