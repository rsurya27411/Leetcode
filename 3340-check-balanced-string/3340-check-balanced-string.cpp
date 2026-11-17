class Solution {
public:
    bool isBalanced(string num) {
        int s1=0,s2=0;
        for(int i=0;i<num.size()-1;i+=2)
        {
            s1+=num[i]-'0';
            s2+=num[i+1]-'0';
            cout<<s1<<" "<<s2<<endl;
        }
        if(num.size()%2 !=0)
        s1+=num[num.size()-1]-'0';
        return s1==s2;
    }
};