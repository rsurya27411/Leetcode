class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        map<int,vector<int>> mp;
        vector<vector<int>> ans;
        for(int i=0;i<gs.size();i++){
            mp[gs[i]].push_back(i);
        }
        for(auto it:mp){
            vector<int> arr;
            int j=0;
            cout<<it.second.size()<<endl;
            while(j<it.second.size()){
                if(arr.size() == it.first){
                    ans.push_back(arr);
                    arr.clear();
                    arr.push_back(it.second[j]);
                }
                else
                arr.push_back(it.second[j]);
                j++;
            }
            if(!arr.empty())
            ans.push_back(arr);
        }
        return ans;
    }
};