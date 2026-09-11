class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> s;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i != j && j != k && i != k){
                        //if(digits[i] != digits[j] && digits[j] != digits[k] && digits[i] != digits[k]){
                            int num = digits[i]*100 + digits[j]*10 + digits[k];
                            if(num >= 100 && num % 2 == 0){
                                //cout<<num<<endl;
                                s.insert(num);
                            }
                        //}
                    }
                }
            }
        }
        //sort(s.begin(),s.end());
        vector<int> ans(s.begin(),s.end());
        return ans;
    }
};