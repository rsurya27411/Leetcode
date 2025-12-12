class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        string black="a1a3a5a7b2b4b6b8c1c3c5c7d2d4d6d8e1e3e5e7f2f4f6f8g1g3g5g7h2h4h6h8";
        string white="a2a4a6a8b1b3b5b7c2c4c6c8d1d3d5d7e2e4e6e8f1f3f5f7g2g4g6g8h1h3h5h7";
        if(black.find(coordinate1) != string::npos && black.find(coordinate2) != string::npos)
        return true;
        if(white.find(coordinate1) != string::npos && white.find(coordinate2) != string::npos)
        return true;
        return false;
    }
};