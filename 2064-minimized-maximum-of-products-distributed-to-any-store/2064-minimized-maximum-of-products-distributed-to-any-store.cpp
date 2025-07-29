class Solution {
public:
    bool isValid(int n, vector<int>& quantities,int mid){
        double sum=0;
        for(int i=0;i<quantities.size();i++)
        sum+=ceil((double)quantities[i]/(double)mid);
    return sum<=n ? false:true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
    int i=0,j=*max_element(quantities.begin(),quantities.end()),ans=-1;
    if(n == 1)return quantities[0];
    while(i<=j){
        int mid = i + (j-i)/2;
        if(!(isValid(n,quantities,mid))){
            ans=mid;
            j=mid-1;
        }
        else
        i=mid+1;
    }
    return ans;
    }
};