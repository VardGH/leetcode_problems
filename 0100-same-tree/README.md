# Same Tree (LeetCode 100)

## Problem Statement

Given the **roots** of two binary trees \`p\` and \`q\`, write a function to **check if they are the same**.

Two binary trees are considered **the same** if:
- They are **structurally identical**.
- The nodes have the **same values**.

---

## Examples

### Example 1:
**Input:**
\`\`\`cpp
p = [1,2,3], q = [1,2,3]
\`\`\`
**Output:** \`true\` 
**Explanation:** Both trees are identical.

---

### Example 2:
**Input:**
\`\`\`cpp
p = [1,2], q = [1,null,2]
\`\`\`
**Output:** \`false\`
**Explanation:** The second tree has a right child, while the first has a left child.

---

### Example 3:
**Input:**
\`\`\`cpp
p = [1,2,1], q = [1,1,2]
\`\`\`
**Output:** \`false\` ❌  
**Explanation:** The node values differ.

---

## Constraints

- The number of nodes in both trees is in the range **[0, 100]**.
- **-10⁴ ≤ Node.val ≤ 10⁴**.

---