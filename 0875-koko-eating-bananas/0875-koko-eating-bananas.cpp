class Solution {
public:
    bool isvalid(int k, vector<int>piles, long long int h){
            long long int tlhrs=0;
            for(int i=0;i<piles.size();i++){
                tlhrs+=piles[i]/k;
                if(piles[i]%k!=0)
                    tlhrs+=1;
                
            }
          if(tlhrs<=h)
          return true;
          else
          return false;


    }
    int minEatingSpeed(vector<int>& piles, int h) {
       long long int l=0,r=*max_element(piles.begin(),piles.end());
          while(r>l+1){
            int mid=(l+r)/2;
            if(isvalid(mid,piles,h)){
               r=mid;
            }
            else{
                l=mid;
            }
          }
          return r;
    }
};