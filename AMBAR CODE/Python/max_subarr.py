def max_subarray(nums):
    max_current = nums[0]  
    max_global = nums[0]   
    
    for i in range(1, len(nums)):
        max_current = max(nums[i], max_current + nums[i])
        max_global = max(max_global, max_current)
    
    return max_global

arr = [1,2,3,4,5]
result = max_subarray(arr)

print("Maximum Subarray Sum:", result)