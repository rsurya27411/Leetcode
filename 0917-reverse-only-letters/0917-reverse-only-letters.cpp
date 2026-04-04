class Solution {
public:
    string reverseOnlyLetters(string s) {
    int n=s.size(),i=0,j=n-1;
    while(i<=j)
        {
        if(!isalpha(s[i])){
        i++;continue;}
        if(!isalpha(s[j])){
        j--;continue;}
        else
        swap(s[i],s[j]);
        i++;j--;
    }
        return s;
    }
};