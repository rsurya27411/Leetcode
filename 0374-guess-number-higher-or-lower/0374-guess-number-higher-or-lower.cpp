/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
    int i=1,j=n;
    while(i<=j)
    {
        int mid=i+((j-i)/2);
        int gues=guess(mid);
        if(gues==0)
        return mid;
        if(gues==-1)
        j=mid-1;
        if(gues==1)
        i=mid+1;
    }
    return -1;
    }
};