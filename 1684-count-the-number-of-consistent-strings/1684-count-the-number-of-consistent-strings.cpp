class Solution
{
public:
    int countConsistentStrings(const std::string& allowed, const std::vector<std::string>& words)
    {
        std::unordered_set<char> seen;

        for (auto ch : allowed) {
            seen.insert(ch);
        }

        int count = 0;

        for (int i = 0; i < words.size(); ++i) {
            bool is_consist = true;
            for (int j = 0; j < words[i].size(); ++j) {
                if (seen.find(words[i][j]) == seen.end()) {
                    is_consist = false;
                    break;
                }
            }
            if (is_consist)
                ++count;
        }

        return count;
    }
};