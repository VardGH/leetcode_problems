# 1669. Merge In Between Linked Lists

## Problem Statement

You are given **two linked lists**: \`list1\` and \`list2\` of sizes **n** and **m** respectively.

- Remove **list1's** nodes from index **a** to **b** (inclusive).
- Insert **list2** in their place.
- Return the modified linked list.

---

## Examples

### **Example 1:**
**Input:**  
\`\`\`
list1 = [10,1,13,6,9,5], a = 3, b = 4
list2 = [1000000,1000001,1000002]
\`\`\`
**Output:** \`[10,1,13,1000000,1000001,1000002,5]\` 
**Explanation:**  
Nodes at indices **3** and **4** (\`6,9\`) are removed and replaced by \`list2\`.

---

### **Example 2:**
**Input:**  
\`\`\`
list1 = [0,1,2,3,4,5,6], a = 2, b = 5
list2 = [1000000,1000001,1000002,1000003,1000004]
\`\`\`
**Output:** \`[0,1,1000000,1000001,1000002,1000003,1000004,6]\`
**Explanation:**  
Nodes at indices **2-5** (\`2,3,4,5\`) are removed and replaced by \`list2\`.

---

## Constraints

- **3 ≤ list1.length ≤ 10⁴**
- **1 ≤ a ≤ b < list1.length - 1**
- **1 ≤ list2.length ≤ 10⁴**
