class Solution {
public:
    bool is_alphanumeric(const char ch)
    {
        return (ch >= '0' && ch <= '9') || 
               (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z');
    }

    bool isPalindrome(std::string s)
    {
        std::string filtered;

        for (auto ch : s) {
            if (is_alphanumeric(ch)) {
                filtered += std::tolower(ch);
            }
        }

        int len = filtered.size();
        for (int i = 0; i < len / 2; ++i) {
            if (filtered[i] != filtered[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
};