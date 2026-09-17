class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> mp;
        int c=0;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]].push_back(i);

        for(auto it:mp){
            if(it.second.size() >= 3){

                vector<int> arr;
                for(auto itt:it.second)
                arr.push_back(itt);

                bool flag = true;
                for(int i=0;i<arr.size()-2;i++){
                    //cout<<arr[i]<<arr[i+1]<<arr[i+2];
                    if(arr[i+1] - arr[i] != arr[i+2] - arr[i+1]){
                        flag=false;
                        break;
                    }
                }
                if(flag == true) c++;
            }
        }
        return c;
    }
};