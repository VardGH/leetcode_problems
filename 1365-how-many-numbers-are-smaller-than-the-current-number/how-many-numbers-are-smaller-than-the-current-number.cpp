class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::vector<int> sorted_nums(nums);
        std::sort(sorted_nums.begin(), sorted_nums.end());

        std::unordered_map<int, int> nums_map;
        for (int i = 0; i < sorted_nums.size(); ++i) {
            if (nums_map.find(sorted_nums[i]) == nums_map.end()) {
                nums_map[sorted_nums[i]] = i;
            }
        }
        
        std::vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            res.push_back(nums_map[nums[i]]);
        }

        return res;
    }
};