class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for(int i=0;i<friends.size();i++){
            int idx=0;
            for(int j=0;j<order.size();j++){
                if(order[j] == friends[i])
                    idx=j;
            }
            ans.push_back(idx);
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<friends.size();i++)
            friends[i]=order[ans[i]];
        return friends;
    }
};