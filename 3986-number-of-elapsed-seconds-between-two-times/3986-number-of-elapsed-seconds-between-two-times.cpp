class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h1=((startTime[0]-'0') * 10) + startTime[1]-'0';
        int m1=((startTime[3]-'0') * 10) + startTime[4]-'0';
        int s1=((startTime[6]-'0') * 10) + startTime[7]-'0';
        int h2=((endTime[0]-'0') * 10) + endTime[1]-'0';
        int m2=((endTime[3]-'0') * 10) + endTime[4]-'0';
        int s2=((endTime[6]-'0') * 10) + endTime[7]-'0';
        return ((h2 - h1)*60*60) + ((m2-m1)*60) + (s2-s1);
    }
};