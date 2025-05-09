def max_water(arr):
    n=len(arr)
    res=0

    for i in range(1,n-1):
        left=arr[i]
        for j in range(i):
            left=max(left,arr[j])

        right=arr[i]
        for j in range(i+1,n):
            right=max(right,arr[j])

        res += (min(right,left)-arr[i])
    
    return res
if __name__ == "__main__":
    arr=[2,1,5,3,1,0,4]
    print(max_water(arr))