class Solution
{
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights)
    {
        std::vector<std::pair<int, std::string>> table;

        for (int i = 0; i < names.size(); ++i) {
            table.emplace_back(heights[i], names[i]);
        }

        std::sort(table.rbegin(), table.rend());

        std::vector<std::string> res;
        for(int i = 0; i < table.size(); ++i) {
            res.push_back(table[i].second);
        }
        return res;
    }
};
