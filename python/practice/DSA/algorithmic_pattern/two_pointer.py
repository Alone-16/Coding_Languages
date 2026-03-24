# Basic Template
"""
left = 0
data = [] # s = list()
right = len(data) - 1

while left < right:
    # do something with data[left] and data[right]

    left += 1
    right -= 1
"""


# Easy: Valid Palindrome 
def valid_palindrome(s):
    word = s.lower().replace(" ", "")
    left = 0
    right = len(word) - 1

    while left < right:
        if word[left] != word[right]:
            return False
        left += 1
        right -= 1
    return True

"""
Better for alphanumeric and simple

def valid_palindrome(s):
    left = 0
    right = len(s) - 1
    s = s.lower()

    while left < right:
        if not s[left].isalnum():
            left += 1
        elif not s[right].isalnum():
            right -= 1
        elif s[left] != s[right]:
            return False
        else:
            left += 1
            right -= 1

    return True
"""
print(valid_palindrome("A man a plan a canal Panama"))
print(valid_palindrome("race a car"))



# Two sum using two pointer
def two_sum_sorted(numbers, target):
    left = 0
    right = len(numbers) - 1

    while left < right:
        current_sum = numbers[left] + numbers[right]

        if current_sum == target:
            return [left + 1, right + 1]
        elif current_sum < target: 
            left += 1
        else:
            right -= 1
        
    return []

print(two_sum_sorted([2, 3, 4], 6))      # [1, 3]
print(two_sum_sorted([1, 2, 3, 4], 7))   # [3, 4]


