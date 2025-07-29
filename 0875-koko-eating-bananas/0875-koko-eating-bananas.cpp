class Solution {
public:
    bool isValid(vector<int>& piles,int h,int mid){
        long c=0;
        for(long i=0;i<piles.size();i++){
            c+=ceil((double)piles[i]/(double)mid);
        }
        return c <= h ? true:false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1,end=*max_element(piles.begin(),piles.end()),ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            cout<<mid<<endl;
            if(isValid(piles,h,mid)){
                ans=mid;
                end=mid-1;
            }
            else
            st=mid+1;
        }
        return ans;
    }
};