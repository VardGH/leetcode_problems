# 3042. Count Prefix and Suffix Pairs I

## Problem Statement

You are given a **0-indexed** string array `words`.

### **Definition of Prefix and Suffix Function**
A function `isPrefixAndSuffix(str1, str2)` is defined as:
- Returns `true` if `str1` is **both a prefix and a suffix** of `str2`.
- Returns `false` otherwise.

**Example:**
- `isPrefixAndSuffix("aba", "ababa")` → `true` (prefix & suffix)
- `isPrefixAndSuffix("abc", "abcd")` → `false` (not a suffix)

### **Task**
Return the **number of index pairs** `(i, j)` such that:
- **i < j**
- `isPrefixAndSuffix(words[i], words[j])` is **true**.


