class Solution {
public:
    vector<int> applyOperations(vector<int>& nums)
    {
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        std::vector<int> res(nums.size(), 0);
        int k = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                res[k++] = nums[i];
            }
        }
        return res;
    }
};
