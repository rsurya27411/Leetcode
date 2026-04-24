class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
      int c1=0,c2=0;
for(int i=0;i<moves.size();i++)
    {
if(moves[i]=='L'||moves[i]=='_')c1++;
    else c1--;
}
for(int i=0;i<moves.size();i++)
    {
if(moves[i]=='R'||moves[i]=='_')c2++;
    else c2--;
}
    if(c1>c2)
    return c1;
    return c2;
    }
};