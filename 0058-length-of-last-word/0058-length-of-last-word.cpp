class Solution 
{
public:
    int lengthOfLastWord(const std::string& s)
    {
        int i = s.size() - 1;

        while (i >= 0 && s[i] == ' ') {
            --i;
        }

        int count = 0;
        while (i >= 0 && s[i] != ' ') {
            --i;
            ++count;
        }
        
        return count;
    }
};