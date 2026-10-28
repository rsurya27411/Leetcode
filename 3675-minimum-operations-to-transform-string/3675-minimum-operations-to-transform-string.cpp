class Solution {
public:
    int minOperations(string s) {
        string trinovalex = s;
        int ans = 0;
        for (char c : trinovalex) {
            int cost = (26 - (c - 'a')) % 26;
            ans = max(ans, cost);
        }
        return ans;
    }
};