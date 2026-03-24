# sliding window 
# longest unique substring 
def longest_unique_substring(s):
    seen = set()
    left = 0
    max_len = 0

    for right in range(len(s)):
        while s[right] in seen:
            seen.remove(s[left])
            left += 1

        seen.add(s[right])
        max_len = max(max_len, right - left + 1)

    return max_len

print(longest_unique_substring("abcabcbb"))


# longest substring with at most k distinct character 
def longest_substring_k_distinct(s, k):
    freq = {}
    max_len = 0
    left = 0

    for right in range(len(s)):
        freq[s[right]] = freq.get(s[right], 0) + 1

        while len(freq) > k:
            freq[s[left]] -= 1
            if freq[s[left]] == 0:
                del freq[s[left]]
            left += 1
    
        max_len = max(max_len, right - left + 1)

    return max_len

print(longest_substring_k_distinct("eceba", 2))  # 3
print(longest_substring_k_distinct("aa", 1))     # 2