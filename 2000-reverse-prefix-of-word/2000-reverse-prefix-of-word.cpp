class Solution 
{
public:
    std::string reversePrefix(std::string word, char ch) 
    {
        int pos = word.find(ch);
        if (pos != std::string::npos) {
            std::reverse(word.begin(), word.begin() + pos + 1);
        }
        return word;
    }
};
