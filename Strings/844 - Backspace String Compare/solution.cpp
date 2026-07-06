#include <bits/stdc++.h>

using namespace std;

/*
Problem: 844. Backspace String Compare
Difficulty: Easy

Topic:
Strings

Pattern:
Stack, Simulation

Link:
https://leetcode.com/problems/backspace-string-compare/

Approach:
Stack Simulation

Algorithm:
1. Traverse both strings independently.
2. Push normal characters onto a stack.
3. If '#' is encountered, pop the top character if the stack is not empty.
4. Compare the final contents of both stacks.

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)

Author:
Tejaswa Tiwari
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> tt;

        for (char ch : s) {
            if (ch == '#') {
                if (!ss.empty())
                    ss.pop();
            } else {
                ss.push(ch);
            }
        }

        for (char ch : t) {
            if (ch == '#') {
                if (!tt.empty())
                    tt.pop();
            } else {
                tt.push(ch);
            }
        }

        if (ss.size() != tt.size())
            return false;

        while (!ss.empty()) {
            if (ss.top() != tt.top())
                return false;

            ss.pop();
            tt.pop();
        }

        return true;
    }
};