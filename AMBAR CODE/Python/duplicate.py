def find_duplicate(arr):
    seen=set()
    duplicate=set()

    for item in arr:
       if item in seen:
          duplicate.add(item)
       else:
          seen.add(item)
    return list(duplicate)

arr=[1,2,3,4,3,2,4,7]
print(find_duplicate(arr))
