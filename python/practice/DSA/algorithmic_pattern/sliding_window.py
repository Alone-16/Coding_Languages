# sliding window 
def max_subarray_sum(nums, k):
    window_sum = sum(nums[:k])
    max_sum = window_sum
    for i in range(k, len(nums)):
        window_sum += nums[i]
        window_sum -= nums[i - k]
        max_sum = max(window_sum, max_sum)

    return max_sum

print(max_subarray_sum([2, 1, 5, 1, 3, 2], 3))
print(max_subarray_sum([1, 2, 3, 4], 2))