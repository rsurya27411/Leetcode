class Solution {
public:
    int passwordStrength(string password) {
        string small="abcdefghijklmnopqrstuvwxyz";
        string caps="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string digs="0123456789";
        string spec="!@#$";
        vector<int> freq(256,0);
        int c=0;
        for(int i=0;i<password.size();i++){
            if(freq[password[i]] == 0 && small.find(password[i]) != string::npos)c++;
            if(freq[password[i]] == 0 && caps.find(password[i]) != string::npos)c+=2;
            if(freq[password[i]] == 0 && digs.find(password[i]) != string::npos)c+=3;
            if(freq[password[i]] == 0 && spec.find(password[i]) != string::npos)c+=5;
            freq[password[i]]++;
            cout<<c<<endl;
        }
        return c;
    }
};