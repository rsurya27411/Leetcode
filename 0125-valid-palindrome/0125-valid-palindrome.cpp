class Solution {
public:
    bool isPalindrome(string s) {
    int i=0,n=s.size(),j=n-1;
    while(i<=j)
        {
    if(!isalnum(s[i])){i++;
    continue;}
    if(!isalnum(s[j])){j--;
    continue;}
if((char)tolower(s[i])!=(char)tolower(s[j]))
      return 0;
    else{
       i++;j--;}
    }
       return 1;
    }
};