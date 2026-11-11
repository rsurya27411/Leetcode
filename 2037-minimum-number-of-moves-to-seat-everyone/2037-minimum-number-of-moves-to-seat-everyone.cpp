class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
       sort(students.begin(),students.end());
        sort(seats.begin(),seats.end());
        int n=seats.size();
        int i,s=0;
        for(i=0;i<n;i++)           
        {
            if(students[i]>seats[i])
            s=s+students[i]-seats[i];
            else
            s=s+seats[i]-students[i];
            }
        return s;
        }
};