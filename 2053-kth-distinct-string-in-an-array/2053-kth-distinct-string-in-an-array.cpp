class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int c=0;
        for(auto it:arr){
            //cout<<it.first<<endl;
            if(mp[it] == 1)c++;
            if(c == k)
            return it;
        }
        return "";
    }
};