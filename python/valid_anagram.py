"""
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Anagram: An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
"""

def isAnagram(s, t):
        if sorted(list(s)) == sorted(list(t)):
            return True
        else:
            return False
        
print(isAnagram("anagram", "nagaram"))
print(isAnagram("foo", "bar"))
