def minimum(arr):
    res=arr[0]
    
    for i in range(1,len(arr)):
        res=min(res,arr[i])
    return res

arr=[1,2,3,4]
print(minimum(arr))