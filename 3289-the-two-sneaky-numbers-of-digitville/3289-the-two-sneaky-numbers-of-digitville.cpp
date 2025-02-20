class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int>& nums)
    {
        std::vector<int> res;
        std::unordered_set<int> set;

        for (int i = 0; i < nums.size(); ++i) {
            if (set.find(nums[i]) != set.end()) {
                res.push_back(nums[i]);

                if (res.size() == 2) 
                    return res;

            } else {
                set.insert(nums[i]);
            }
        }
        return res;
    }
};