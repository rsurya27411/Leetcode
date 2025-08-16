class Solution {
public:
    int maximum69Number (int num) {
     vector<int> ans;
     int n=num,s=0;
     while(n)
         {
         ans.push_back(n%10);
         n=n/10;
     }
reverse(ans.begin(),ans.end());
int i=0,n1=ans.size(),j=n1-1;
    for(i=0;i<n;i++)
    cout<<ans[i]<<" ";
    for(i=0;i<n1;i++)
        {
        if(ans[i]==6)
            {
            ans[i]=9;
            break;
        }
    }
    for(i=0;i<n1;i++)
    s=s*10+ans[i];
        return s;
    }
};