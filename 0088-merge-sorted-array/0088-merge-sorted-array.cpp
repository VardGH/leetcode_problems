class Solution 
{
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
    {
        int i = m - 1;
        int j = n - 1;
        int len = m + n - 1;

        while (j >= 0 && i >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[len--] = nums1[i--]; 
            } else {
                nums1[len--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[len--] = nums2[j--];
        }
    }
};