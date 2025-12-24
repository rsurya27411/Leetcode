class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int totapp=0;
        for(auto i:apple)
        totapp+=i;
        int c=0,j=capacity.size()-1;
        while(totapp>0){
            totapp-=capacity[j--];
            c++;
        }
        return c;
    }
};