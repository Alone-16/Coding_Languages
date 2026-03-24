# Hash Map 

# Two Sum function
nums_1 = [1, 2, 3, 4, 5]
target = 9
hash_map = {}

for i, value in enumerate(nums_1):
    complement = target - value
    if complement in hash_map:
        print([hash_map[complement], i])
        break
    hash_map[value] = i


# Repeating number 
nums_2 = [3, 1, 4, 1, 5]
hash_map = {}

for i, value in enumerate(nums_2):
    complement = value
    if complement in hash_map:
        print(hash_map[value])
        break
    hash_map[value] = i                  # Use function when asked to return the output


# Strings
def first_unique_char(word):
    freq = {}
    for ch in word:
        if ch in freq:
            freq[ch] += 1
        else:
            freq[ch] = 1

    for i, ch in enumerate(word):
        if freq[ch] == 1:
            return i
        
    return -1
    
s = "leetcode"
print(first_unique_char(s))


# character
def contains_duplicate_char(s):
    seen = {}   # better to use seen = set()
    for ch in s:
        if ch in seen:
            return True
        else:
            seen[ch] = True  # seen.add(ch)
    
    return False

print(contains_duplicate_char("hello"))
print(contains_duplicate_char("abc"))
