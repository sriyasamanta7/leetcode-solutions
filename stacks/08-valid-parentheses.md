# Valid Parentheses

## Problem
Determine whether the brackets in a string are valid and correctly matched.

## Approach
Use a stack to store opening brackets. For each closing bracket, check whether it matches the most recent opening bracket. The string is valid if all brackets match and the stack is empty at the end.

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## Result
Accepted on LeetCode and tested locally in VS Code.