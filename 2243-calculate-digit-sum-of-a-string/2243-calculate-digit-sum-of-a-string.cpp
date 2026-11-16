class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();
        while(n > k){
            string str="";
            for(int i=0;i<n;i+=k){
                int sum=0;
                //cout<<i<<" ";
                for(int j=i;j<i+k;j++){
                    if(j<n)
                    sum+=s[j]-'0';
                }
                //cout<<sum<<endl;
                str=str+to_string(sum);
                cout<<str<<endl;
            }
            s=str;
            n=s.size();
        }
        return s;
    }
};