def two_pair_sum(arr,target_sum):
    seen=set()

    for num in arr:
        complement=target_sum-num

        if complement in seen:
            return True
        seen.add(num)
    return False

arr=[4,5,3,9]
target_sum=7
print(two_pair_sum(arr,target_sum))