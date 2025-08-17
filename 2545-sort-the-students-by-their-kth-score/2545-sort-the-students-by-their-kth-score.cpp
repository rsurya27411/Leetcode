class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<score.size();i++){
            int maxi=-1,j=0,idx=-1;
            for(j=0;j<score.size();j++){
                if(score[j][k] > maxi){
                    maxi=score[j][k];
                    idx=j;
                }
            }
            mp[maxi]=idx;
            score[idx][k]=-1;
        }
        for (auto it = mp.rbegin(); it != mp.rend(); ++it){
            int i=it->second;
            int val=it->first;
            score[i][k] = val;
            ans.push_back(score[i]);
        }
        return ans;
    }
};