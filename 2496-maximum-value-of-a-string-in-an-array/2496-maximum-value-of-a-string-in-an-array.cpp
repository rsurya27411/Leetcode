class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for(int i=0;i<strs.size();i++){
            bool flag=true;
            for(int j=0;j<strs[i].size();j++){
                if(isalpha(strs[i][j])){
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                int l=(strs[i].size());
                ans=max(ans,l);
            }
            else{
                int n=stoi(strs[i]);
                ans=max(ans,n);
            }
        }
        return ans;
    }
};