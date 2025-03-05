class Solution
{
public:

    int encrypt(int x) 
    {
        std::string num = std::to_string(x);
        char max_digit = '0';

        for (char ch : num) {
            max_digit = std::max(max_digit, ch);
        }

        std::string encrypted(num.size(), max_digit);
        
        return std::stoi(encrypted);
    }

    int sumOfEncryptedInt(std::vector<int>& nums)
    {
        int sum = 0;
        for (int num : nums) {
            sum += encrypt(num);
        }
        return sum;
    }
};
