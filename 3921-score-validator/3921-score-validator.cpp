class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int c=0,sum=0;
        for(int i=0;i<events.size();i++){
            if(c == 10)
                break;
            if(events[i] == "W")
                c++;
            if(events[i] == "WD" || events[i] == "NB")
                sum++;
            if(events[i] == "1" || events[i] == "2" || events[i] == "3" || events[i] == "4" || events[i] == "5" || events[i] == "6"){
                int num=stoi(events[i]);
                sum+=num;
            }
        }
        return {sum,c};
    }
};