class Solution
{
public:
    int commonFactors(int a, int b)
    {
        std::unordered_set<int> divides1;

        for (int i = 1; i <= a; ++i) {
            if (a % i == 0) {
                divides1.insert(i);
            }
        }

        int count = 0;

        for (int i = 1; i <= b; ++i) {
            if (b % i == 0 && divides1.find(i) != divides1.end())
                ++count;
        }

        return count;
    }
};
