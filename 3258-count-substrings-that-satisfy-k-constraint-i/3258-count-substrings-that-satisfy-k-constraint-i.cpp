class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int c=0;
        for(int i=0;i<s.size();i++){
            int z=0,o=0;
            for(int j=i;j<s.size();j++){
                if(s[j] == '0')
                z++;
                if(s[j] == '1')
                o++;
                if(z > k && o > k){
                    break;
                }
                if(z <= k || o <= k){
                    c++;
                }
            }
        }
        return c;
    }
};