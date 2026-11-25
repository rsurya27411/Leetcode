class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if(next_permutation(s.begin(), s.end()) == 0)
        return -1;
        if(stol(s) > 2147483647)return -1;
        return stol(s);
    }
};