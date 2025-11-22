class Solution {
public:
    int minimumFlips(int n) {
        string s="";
        while(n){
            s+=to_string(n%2);
            n/=2;
        }
        reverse(s.begin(),s.end());
        int i=0,j=s.size()-1,c=0;
        while(i<j){
            if(s[i] != s[j])
            c+=2;
            i++;
            j--;
        }
        cout<<c;
        return c;
    }
};