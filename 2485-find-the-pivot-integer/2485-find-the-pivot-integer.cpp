class Solution 
{
public:
    int pivotInteger(int n)
    {
        int sum = ((n + 1) * n) / 2;
        int root = std::sqrt(sum);

        if (root * root == sum)
            return root;
        else 
            return -1;
    }
};
