# [149. Rotate a LL](https://takeuforward.org/practice/dsa/rotate-a-ll)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the head of a singly linked list containing integers, shift the elements of the linked list to the **right** by **k** places and return the head of the modified list. Do not change the values of the nodes, only change the links between nodes.

### Example 1:

**Input:** head -> 1 -> 2 -> 3 -> 4 -> 5, k = 2

**Output:** head -> 4 -> 5 -> 1 -> 2 -> 3

**Explanation:**

List after 1 shift to right: head -> 5 -> 1 -> 2 -> 3 -> 4.

List after 2 shift to right: head -> 4 -> 5 -> 1 -> 2 -> 3.

### Example 2:

**Input:** head -> 1 -> 2 -> 3 -> 4 -> 5, k = 4

**Output:** head -> 2 -> 3 -> 4 -> 5 -> 1

**Explanation:**

List after 1 shift to right: head -> 5 -> 1 -> 2 -> 3 -> 4.

List after 2 shift to right: head -> 4 -> 5 -> 1 -> 2 -> 3.

List after 3 shift to right: head -> 3 -> 4 -> 5 -> 1 -> 2.

List after 4 shift to right: head -> 2 -> 3 -> 4 -> 5 -> 1.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= number of nodes in the linked list <= 10^5
- -10^4 <= ListNode.val <= 10^4
- 0 <= k <= 5 * 10^5
- k may have values greater than number of nodes in the linked list.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
