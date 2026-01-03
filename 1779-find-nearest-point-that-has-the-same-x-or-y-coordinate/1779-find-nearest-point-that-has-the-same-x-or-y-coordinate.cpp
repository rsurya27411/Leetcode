class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=INT_MAX,idx=0;
        for(int i=0;i<points.size();i++){
            if(x == points[i][0] || y == points[i][1]){
                int dis = abs(x-points[i][0]) + abs(y-points[i][1]);
                cout<<dis<<"";
                if(dis < ans){
                    ans=dis;
                    idx=i;
                }
            }
        }
        if(ans == INT_MAX)
        return -1;
        return idx;
    }
};