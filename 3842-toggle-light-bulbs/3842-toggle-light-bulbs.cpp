class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> freq(101,0);
        vector<int> ans;

        for(int i=0;i<bulbs.size();i++){
            if(freq[bulbs[i]] == 0)
            freq[bulbs[i]] = 1;
            else
            freq[bulbs[i]] = 0;
        }

        for(int i=0;i<bulbs.size();i++){
            if(freq[bulbs[i]] == 1)
            ans.push_back(bulbs[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};