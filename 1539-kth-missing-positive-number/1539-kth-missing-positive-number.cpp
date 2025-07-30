class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    vector<int> freq(1001);
 for(int i=0;i<arr.size();i++)
    freq[arr[i]]++;
    int i=0,c=0;
    //cout<<freq[0];
 while(c<=k)
     {
     if(freq[i]==0&&i==0)
     {i++;continue;}
     if(c==k)
         return i-1;
    else if(freq[i]==0)
    c++;
    i++;
 }
    cout<<arr[0];
    return 0;     
    }
};