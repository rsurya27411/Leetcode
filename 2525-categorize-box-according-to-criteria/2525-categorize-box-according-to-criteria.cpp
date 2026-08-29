class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
long long v=(long long)length*(long long)width*(long long)height;
    if((length>=10000 || width>=10000  || height>=10000 || height>=10000 || v>=1000000000) && mass >= 100) // bulky and heavy
    return "Both"; 

    if((length>=10000 || width>=10000  || height>=10000 || height>=10000 || v>=1000000000) && mass < 100) //bulky but not heavy
    return "Bulky";

    if((length < 10000 || width < 10000  || height < 10000 || height <10000 || v < 1000000000) && mass >= 100) // heavy but not bulky
    return "Heavy";

    if(mass>=100)
    return "Heavy";

    if(length>=10000||width>=10000||height>=10000||height>=10000||v>=1000000000)
    return "Bulky";

    return "Neither";
    }
};