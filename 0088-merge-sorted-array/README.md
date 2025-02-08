# Merge Sorted Array (LeetCode 88)

## Problem Statement

You are given two integer arrays \`nums1\` and \`nums2\`, sorted in **non-decreasing** order, and two integers \`m\` and \`n\`, representing the number of elements in \`nums1\` and \`nums2\`, respectively.

Merge \`nums1\` and \`nums2\` into a **single array**, sorted in **non-decreasing** order.

The final sorted array **should not be returned** by the function, but instead be stored inside the array \`nums1\`. To accommodate this, \`nums1\` has a length of \`m + n\`, where:
- The first \`m\` elements denote the values to merge.
- The last \`n\` elements are set to \`0\` and should be ignored.

\`nums2\` has a length of \`n\`.

---

## Examples

### Example 1:
**Input:**
\`\`\`cpp
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3
\`\`\`
**Output:**
\`\`\`cpp
[1,2,2,3,5,6]
\`\`\`
**Explanation:** Merging \`[1,2,3]\` and \`[2,5,6]\` results in \`[1,2,2,3,5,6]\`.

---

### Example 2:
**Input:**
\`\`\`cpp
nums1 = [1], m = 1
nums2 = [], n = 0
\`\`\`
**Output:**
\`\`\`cpp
[1]
\`\`\`

---

### Example 3:
**Input:**
\`\`\`cpp
nums1 = [0], m = 0
nums2 = [1], n = 1
\`\`\`
**Output:**
\`\`\`cpp
[1]
\`\`\`

---

## Constraints

- \`nums1.length == m + n\`
- \`nums2.length == n\`
- \`0 <= m, n <= 200\`
- \`1 <= m + n <= 200\`
- \`-10^9 <= nums1[i], nums2[j] <= 10^9\`