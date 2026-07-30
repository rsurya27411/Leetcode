class Solution {
public:
    int minimumPushes(string word) {
        int c=1,sum=0;
        for(int i=0;i<word.size();i++){
            sum+=c;
            if((i+1) % 8 == 0)
            c++;
        }
        return sum;
    }
};