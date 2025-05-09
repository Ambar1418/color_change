def search_sorted_arr(nums,target):
    left=0
    right=len(nums)-1

    while left<=right:

        mid=(left+right)//2
    
        if nums[mid]==target:
            return mid
        
        elif target<nums[mid]:
            right = mid-1
        else:
            left=mid+1

nums=[1,2,3,4,5,6,7]
target=3
print(search_sorted_arr(nums,target))