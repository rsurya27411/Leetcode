class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = (double)(abs((60 * hour) - (11 * minutes)))/2;
        return min(ans,360-ans);
    }
};