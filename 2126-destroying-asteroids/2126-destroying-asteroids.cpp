class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
    sort(asteroids.begin(),asteroids.end());
    long long s=mass;
    for(int i=0;i<asteroids.size();i++)
    {
    cout<<mass<<endl;
    if(s>=asteroids[i])
        s+=asteroids[i];
    else
        return false;
}
    return true;
    }
};