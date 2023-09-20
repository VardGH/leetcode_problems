class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> my_map;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = my_map.find(target - nums[i]);
            if (it == my_map.end()) {
                my_map.insert({nums[i], i});
            } else {
                return {it->second, i};
            }
        }
        return {-1, -1};
    }
};