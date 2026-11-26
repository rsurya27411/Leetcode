class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxi=-1;
        map<int,int> mp;
        while(r<fruits.size()){
            
            mp[fruits[r]]++;

            if(mp.size() > 2){
            while(mp.size() > 2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0)
                mp.erase(fruits[l]);
                l++;
                }
            }

            if(mp.size() <= 2)
            maxi=max(r-l+1,maxi);

            r++;
        }
        return maxi;
    }
};