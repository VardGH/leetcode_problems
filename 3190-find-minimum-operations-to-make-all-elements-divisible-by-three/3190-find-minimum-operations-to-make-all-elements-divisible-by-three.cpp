class Solution
{
public:
    int minimumOperations(vector<int>& nums)
    {
        int count = 0;

        for (auto num : nums) {
            if (num % 3 == 1 || num % 3 == 2) {
                ++count;
            }
        }
        return count;
    }
};
