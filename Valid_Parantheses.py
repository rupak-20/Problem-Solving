#Valid Parantheses
#Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

#An input string is valid if:
#Open brackets must be closed by the same type of brackets.
#Open brackets must be closed in the correct order.

#Example 1:
#Input: s = "()"
#Output: true

#Example 2:
#Input: s = "()[]{}"
#Output: true

#Example 3:
#Input: s = "(]"
#Output: false

#Example 4:
#Input: s = "([)]"
#Output: false

#Example 5:
#Input: s = "{[]}"
#Output: true
 
#Constraints:

#1 <= s.length <= 104
#s consists of parentheses only '()[]{}'.

#solution:

from collections import deque

pair = {'(' : ')', '[': ']', '{': '}'} #define a pair of brackets. Makes things much easier

def isValid(s: str) -> bool:
    stack =  deque()    #deque is more suitable when stack size is large and you want quick push pop operations
    #alternatively you can use list. But push and pop operations have O(n) time complexity in list as compared to O(1) in deque

    for i in range(len(s)):
        if len(stack) == 0:
            stack.append(s[i])
        elif s[i] == '(' or s[i] == '[' or s[i] == '{':
            stack.append(s[i])
        elif pair[stack.pop()] != s[i] :
            return False

    return len(stack) == 0
        
print(isValid('(()'))   #you may take other strings as example here