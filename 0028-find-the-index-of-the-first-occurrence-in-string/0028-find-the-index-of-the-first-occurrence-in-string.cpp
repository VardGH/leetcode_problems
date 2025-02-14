class Solution
{
public:
    bool subStr(const std::string& haystack, int i, const std::string& needle)
    {
        if (i >= haystack.size()) {
            return false;
        }

        for (int j = 0; j < needle.size() && i < haystack.size(); ++j, ++i) {
            if (haystack[i] != needle[j]) {
                return false;
            }
        }
        return true;
    }

    int strStr(string haystack, string needle)
    {
        if (haystack.size() < needle.size()) {
            return -1;
        }

        for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
            if (subStr(haystack, i, needle)) {
                return i;
            }
        }
        return -1;
    }
};