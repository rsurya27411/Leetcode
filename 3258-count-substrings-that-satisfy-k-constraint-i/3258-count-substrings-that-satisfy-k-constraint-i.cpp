class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int c=0;
        int z=0,o=0,l=0,r=0;
        while(r<s.size()){
                if(s[r] == '0')
                z++;
                if(s[r] == '1')
                o++;
                if(z > k && o > k){
                    while(z>k && o>k){
                        if(s[l] == '0')
                        z--;
                        if(s[l] == '1')
                        o--;
                        l++;
                    }
                }
            if(z <= k || o <= k)
            c+=(r-l+1);
            r++;
        }
        return c;
    }
};