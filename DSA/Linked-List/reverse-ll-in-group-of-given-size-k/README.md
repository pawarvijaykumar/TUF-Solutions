# [38. Reverse LL in group of given size K](https://takeuforward.org/practice/dsa/reverse-ll-in-group-of-given-size-k)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the head of a singly linked list containing integers, **reverse** the nodes of the list in **groups of k** and return the head of the modified list. If the number of nodes is not a multiple of k, then the remaining nodes at the end should be kept as is and not reversed.

Do not change the values of the nodes, only change the links between nodes.

### Example 1:

**Input:** head -> 1 -> 2 -> 3 -> 4 -> 5, k = 2

**Output:** head -> 2 -> 1 -> 4 -> 3 -> 5

**Explanation:** The groups 1 -> 2 and 3 -> 4 were reversed as 2 -> 1 and 4 -> 3.

### Example 2:

**Input:** head -> 1 -> 2 -> 3 -> 4 -> 5, k = 3

**Output:** head -> 3 -> 2 -> 1 -> 4 -> 5

**Explanation:** The groups 1 -> 2 -> 3 were reversed as 3 -> 2 -> 1.

Note that 4 -> 5 was not reversed.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= k <= number of nodes in the linked list <= 10^5
- -10^4 <= ListNode.val <= 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
