// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    int start=1,end=n;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        //cout<<isBadVersion(mid)<<endl;
        if(isBadVersion(mid) == 1 && isBadVersion(mid-1) == 0)
        return mid;
        if(isBadVersion(mid) == 1)
        end=mid-1;
        else
        start=mid+1;
    }
    cout<<(isBadVersion(5));
    return end;
    }
};