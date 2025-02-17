class Solution
{
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        std::vector<int> result(arr.size(), -1);

        for (int i = 1; i < arr.size(); ++i) {
            result[i - 1] = *max_element(arr.begin() + i, arr.end());
        }
        return result;
    }
};