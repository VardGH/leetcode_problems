class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int real_sum {};
        for (auto num : nums) {
            real_sum += num;
        }
        
        int n = nums.size();
        int sum = n *(1 + n) / 2;

        return sum - real_sum;
    }
};