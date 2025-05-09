def exceptselfprint(arr):
    n=len(arr)

    prod=n*[1]

    for i in range(n):
        for j in range(n):
          if i!=j:
            prod[i]*=arr[j]

    return prod

arr=[1,2,3]
print(exceptselfprint(arr))