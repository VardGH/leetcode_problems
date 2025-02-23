class Solution
{
public:
    vector<int> numberGame(vector<int>& nums)
    {
        std::vector<int> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i+=2) {
            res.push_back(nums[i + 1]);
            res.push_back(nums[i]);
        }
        return res;
    }
};