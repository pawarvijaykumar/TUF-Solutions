# [235. Flattening of LL](https://takeuforward.org/practice/dsa/flattening-of-ll)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given a special linked list containing **n head** nodes where every node in the linked list contains **two** pointers:

- ‘ **Next** ’ points to the next node in the list
- ‘ **Child** ’ pointer to a linked list where the current node is the head

Each of these **child** linked lists is in **sorted** order and connected by a ' **child** ' pointer.

**Flatten** this linked list such that all nodes appear in a single sorted layer connected by the ' **child** ' pointer and return the head of the modified list.

### Example 1:

**Input:**

<img src="https://static.takeuforward.org/content/ProblemSetter-hVtR9OSV">

**Output:** head -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 11 -> 12

**Explanation:** All the linked lists are joined together and sorted in a single level through the child pointer.

### Example 2:

**Input:**

<img src="https://static.takeuforward.org/content/ProblemSetter-gsamAJrJ">

**Output:** head -> 2 -> 4 -> 5 -> 10 -> 12 -> 13 -> 16 -> 17 -> 20

**Explanation:** All the linked lists are joined together and sorted in a single level through the child pointer.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- n == Number of head nodes
- 1 <= n <= 100
- 1 <= Number of nodes in each child linked list <= 100
- 0 <= ListNode.val <= 1000
- All child linked lists are sorted in non-decreasing order

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
