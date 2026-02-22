class Solution {
public:
    int binaryGap(int n) {
        string bits="";
        while(n){
            bits+=to_string(n%2);
            n/=2;
        }
        reverse(bits.begin(),bits.end());
        //cout<<bits;

        int a=bits.find('1'),ans=0;
        for(int i=a;i<bits.size();i++){
            if(bits[i] == '1'){
                for(int j=i+1;j<bits.size();j++){
                if(bits[j] == '1'){
                    ans=max(j-i,ans);
                    break;
                    }
                }
            }
        }
        cout<<ans;
        return ans;
    }
};