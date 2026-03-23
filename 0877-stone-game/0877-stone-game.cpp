class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int asum=0,bsum=0;
        for(int i=piles.size()-1;i>0;i-=2)
        {
            asum+=piles[i];
            bsum+=piles[i-1];
        }
        if(asum>=bsum)
        return true;
        return false;
    }
};