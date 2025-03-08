class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int x = start ^ goal;
        int res = 0;

        while (x) {
            res += x & 1;

            x = x >> 1;
        }
        return res;
    }
};