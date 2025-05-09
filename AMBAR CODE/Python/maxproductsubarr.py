def maxprosubarr(arr):
    n=len(arr)
    result=arr[0]

    for i in range(n):
        mul=1
        for j in range(i,n):
            mul=arr[j]*mul
            result=max(result,mul)
    
    return result

arr=[2,3,-4,5]
print(maxprosubarr(arr))