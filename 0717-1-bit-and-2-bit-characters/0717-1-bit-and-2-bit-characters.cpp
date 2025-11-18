class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        for(i=0;i<bits.size()-1;i++){
            if(bits[i] == 0)
            continue;
            else
            i++;
        }
        if(i == bits.size()-1)
        return true;
        return 0;
    }
};