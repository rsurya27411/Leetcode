class Solution {
public:
    int minimumChairs(string s) {
        int chairs=1,per_ins=0;
        for(int i=0;i<s.size();i++){
            if(chairs-per_ins < 0)
            chairs++;
            if(chairs == per_ins && s[i] == 'E')
            chairs++;
            if(s[i] == 'E')
            per_ins++;
            if(s[i] == 'L')
            per_ins--;
        }
        return chairs;
    }
};