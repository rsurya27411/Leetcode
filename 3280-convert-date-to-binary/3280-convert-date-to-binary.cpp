class Solution {
public:
string tobinary(int n)
{
    string str="";
    while(n)
    {
        str+=to_string(n%2);
        n/=2;
    }
    reverse(str.begin(),str.end());
    return str;
}
    string convertDateToBinary(string date) {
        string a=date.substr(8,2),b=date.substr(5,2),c=date.substr(0,4);
        int n1=stoi(a),n2=stoi(b),n3=stoi(c);
        string ans=tobinary(n3)+"-"+tobinary(n2)+"-"+tobinary(n1);
        return ans;
    }
};