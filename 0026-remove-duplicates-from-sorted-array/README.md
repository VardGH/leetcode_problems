# 26. Remove Duplicates from Sorted Array

## Problem Description

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates **in-place** so that each unique element appears only once. The relative order of the elements should be maintained. Return the number of unique elements in `nums`.

### Examples:

- **Example 1:**

    **Input:**  
    `nums = [1,1,2]`  
    **Output:**  
    `k = 2, nums = [1,2,_]`  
    **Explanation:**  
    The function should return `k = 2`, with the first two elements of `nums` being `1` and `2`. The remaining elements can be ignored (indicated by underscores).

- **Example 2:**

    **Input:**  
    `nums = [0,0,1,1,1,2,2,3,3,4]`  
    **Output:**  
    `k = 5, nums = [0,1,2,3,4,_,_,_,_,_]`  
    **Explanation:**  
    The function should return `k = 5`, with the first five elements of `nums` being `0`, `1`, `2`, `3`, and `4`. The remaining elements can be ignored (indicated by underscores).

## Constraints:
- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.
