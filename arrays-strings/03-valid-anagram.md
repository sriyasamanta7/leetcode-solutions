# Valid Anagram

## Problem
Determine whether two strings contain the same letters with the same frequencies.

## Approach
Use a frequency array of size 26. Increment the count for each letter in the first string and decrement it for each letter in the second. If every count is zero, the strings are anagrams.

## Complexity
- **Time Complexity:** O(n + m)
- **Space Complexity:** O(1), because the frequency array has a fixed size of 26.

## Result
Accepted on LeetCode and tested locally in VS Code.