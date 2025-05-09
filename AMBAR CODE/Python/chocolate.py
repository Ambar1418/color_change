def find_min_diff(arr,m,n):
    if m and n==0 or m>n:
        return -1
    
    min_diff=float('inf')
    arr.sort()
    for i in range(n-m+1):
        diff=arr[i+m-1]-arr[i]
        min_diff=min(diff,min_diff)

    return min_diff

arr=[12,4,7,9,2,5,8]
m=7
n=len(arr)

result=find_min_diff(arr,m,n)
if result != -1:
    print(f"The minimum difference is {result}")
else:
    print("Not enough packets to distribute")
