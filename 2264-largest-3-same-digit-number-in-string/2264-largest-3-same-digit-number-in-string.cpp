class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int maxi=-1;
        for(int i=1;i<num.size()-1;i++){
            if(i<num.size() && num[i-1] == num[i] && num[i] == num[i+1]){
                maxi=max(num[i]-'0',maxi);
                ans=to_string(maxi)+to_string(maxi)+to_string(maxi);
            }
        }
        return ans;
    }
};