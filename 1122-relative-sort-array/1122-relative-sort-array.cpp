class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
sort(arr1.begin(),arr1.end());
    vector<int> ans;
    int n1=arr1.size();
    int n2=arr2.size();
    int i,j,k;
    vector<int> A;
    for(i=0;i<n2;i++){
    for(j=0;j<n1;j++){
    if(arr2[i]==arr1[j]){
    ans.push_back(arr2[i]);
    arr1[j]=-1;}}}
    for(i=0;i<n1;i++)
    if(arr1[i]>=0)
    ans.push_back(arr1[i]);
    return ans;
    }
};