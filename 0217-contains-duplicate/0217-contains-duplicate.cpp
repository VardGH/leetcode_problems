class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int> set_nums;

        for (auto num : nums) {
            if (set_nums.find(num) != set_nums.end()) {
                return true;
            }
            set_nums.insert(num);
        }
        return false;
    }
};