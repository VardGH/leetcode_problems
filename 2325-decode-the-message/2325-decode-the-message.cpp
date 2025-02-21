class Solution 
{
public:
    std::string decodeMessage(std::string& key, std::string& message)
    {
        std::unordered_map<char, char> key_map;

        char ch = 'a';
        for (char i : key) {
            if (i != ' ' && key_map.find(i) == key_map.end())
                key_map[i] = ch++;
        }
        
        std::string res;
        for (char i : message) {
            res += (i == ' ') ? ' ' : key_map[i];
        }

        return res;
    }
};