class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            //if(stones.size() == 1) break;
            sort(stones.begin(),stones.end());
            // for(auto it:stones)
            // cout<<it;
            // cout<<endl;
            if(stones[stones.size()-1] == stones[stones.size()-2]){
                //cout<<stones[stones.size()-1]<<" "<<stones[stones.size()-2]<<endl;
                stones.pop_back();
                stones.pop_back();
            }
            else{
                //cout<<stones[stones.size()-1]<<" "<<stones[stones.size()-2]<<endl;
                int val = stones[stones.size()-1] - stones[stones.size()-2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(val);
                //cout<<stones[stones.size()-1] - stones[stones.size()-2]<<endl;
            }
        }
        if(stones.size() == 0) return 0;
        return stones[0];
    }
};