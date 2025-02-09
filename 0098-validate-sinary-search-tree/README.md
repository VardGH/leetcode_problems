# 98. Validate Binary Search Tree

## Problem Statement

Given the **root** of a binary tree, determine if it is a **valid Binary Search Tree (BST)**.

A **valid BST** is defined as follows:
1. The **left subtree** of a node contains only nodes with keys **less than** the node's key.
2. The **right subtree** of a node contains only nodes with keys **greater than** the node's key.
3. **Both** the left and right subtrees **must also be** binary search trees.

---

## Examples

### Example 1:
**Input:**
\`\`\`
root = [2,1,3]
\`\`\`
**Output:** \`true\`
**Explanation:** The tree satisfies all BST conditions.

### Example 2:
**Input:**
\`\`\`
root = [5,1,4,null,null,3,6]
\`\`\`
**Output:** \`false\`
**Explanation:** The root node's value is **5**, but the right child **4** is not greater than **5**, violating the BST property.
