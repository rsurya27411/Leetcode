class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0,c=0;
        while(i<players.size())
        {
            if(j >= trainers.size())
            break;
            if(players[i] <= trainers[j])
            {
                c++;i++;
            }
            j++;
        }
        return c;
    }
};