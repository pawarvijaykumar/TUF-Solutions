# [134. Clone a LL with random and next pointer](https://takeuforward.org/practice/dsa/clone-a-ll-with-random-and-next-pointer)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the head of a special linked list of n nodes where each node contains an additional pointer called 'random' which can point to any node in the list or null.

Construct a **deep copy** of the linked list where,

- n new nodes are created with corresponding values as original linked list.
- The random pointers point to the corresponding new nodes as per their arrangement in the original list.
- Return the head of the newly constructed linked list.

**Note** : For custom input, a n x 2 matrix is taken with each row having 2 values: **[ val, random_index]** where,

- **val** : an integer representing ListNode.val
- **random_index** : index of the node (0 - n-1) that the random pointer points to, otherwise -1.

### Example 1:

**Input:** [[1, -1], [2, 0], [3, 4], [4, 1], [5, 2]]

**Output:** 1 2 3 4 5, true

**Explanation:** All the nodes in the new list have same corresponding values as original nodes.

All the random pointers point to their corresponding nodes in the new list.

'true' represents that the nodes and references were created new.

### Example 2:

**Input:** [[5, -1], [3, -1], [2, 1], [1, 1]]

**Output:** 5 3 2 1, true

**Explanation:** All the nodes in the new list have same corresponding values as original nodes.

All the random pointers point to their corresponding nodes in the new list.

'true' represents that the nodes and references were created new.

[[5, -1], [3, -1], [2, -1], [1, -1]] will be incorrect, although it has the same values.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- n == number of nodes in the linked list.
- 1 <= n <= 10^5
- -10^4 <= ListNode.val <= 10^4
- 0 <= random_index < n or random_index == -1.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
