class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int n=letters.size(),i;
    for(i=0;i<n;i++)
    {
    if((int)letters[i]>(int)target)
    return letters[i];
    }
    return letters[0];
    }
};