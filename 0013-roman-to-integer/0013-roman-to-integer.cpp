class Solution
{
public:
    int romanToInt(string s)
    {
        std::unordered_map <char, int> symbol_val
        {
            {'I',1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} 
        };

        int res = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (symbol_val[s[i]] < symbol_val[s[i + 1]]) {
                res -= symbol_val[s[i]];
            } else {
                res += symbol_val[s[i]];
            }
        }
        return res;
    }
};