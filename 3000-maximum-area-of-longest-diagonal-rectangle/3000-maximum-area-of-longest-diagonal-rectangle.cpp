class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int area = dimensions[0][0] * dimensions[0][1];
    double diag = sqrt(1LL * dimensions[0][0] * dimensions[0][0] +
                       1LL * dimensions[0][1] * dimensions[0][1]);

    for (int i = 1; i < dimensions.size(); i++) {
        int curArea = dimensions[i][0] * dimensions[i][1];
        double curDiag = sqrt(1LL * dimensions[i][0] * dimensions[i][0] +
                              1LL * dimensions[i][1] * dimensions[i][1]);

        if (curDiag > diag || (curDiag == diag && curArea > area)) {
            diag = curDiag;
            area = curArea;
        }
    }
    return area;
}
};