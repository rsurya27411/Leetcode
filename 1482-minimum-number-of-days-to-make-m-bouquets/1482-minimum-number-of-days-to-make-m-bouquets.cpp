class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k,int mid){
        int c=0,nob=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= mid)
            c++;
            else{
                nob+=c/k;
                c=0;
            }
        }
        nob+=c/k;
        return nob>=m ? true:false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int st=*min_element(bloomDay.begin(),bloomDay.end());
        int end=*max_element(bloomDay.begin(),bloomDay.end()),ans=0;
        long long mul=(long long)m*(long long)k;
        if(mul > bloomDay.size())return -1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isPossible(bloomDay,m,k,mid)){
                ans=mid;
                end=mid-1;
            }
            else
            st=mid+1;
        }
        return ans;
    }
};