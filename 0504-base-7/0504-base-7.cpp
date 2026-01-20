class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)return "0";
        string str="";int n=num;
        if(num<0)
        num=-num;
        while(num)
        {
            int r=num%7;
            str+=to_string(r);
            num/=7;
        }
        if(n<0)
        str+="-";
        reverse(str.begin(),str.end());
        return str;
    }
};