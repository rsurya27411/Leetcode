class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area = dimensions[0][0] * dimensions[0][1];
        double diag = sqrt(pow(dimensions[0][0],2) + pow(dimensions[0][1],2));
        cout<<diag;
        for(int i=1;i<dimensions.size();i++){
            double val=sqrt(pow(dimensions[i][0],2) + pow(dimensions[i][1],2));
            cout<<val;
            if(val >= diag){
                area = dimensions[i][0] * dimensions[i][1];
                diag = val;
            }
        }
        return area;
    }
};