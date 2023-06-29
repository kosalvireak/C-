arr = [29, 72, 98, 13, 87, 66, 52, 51, 36]
lent = len(arr)
print("array before sort: ", arr)
for i in range(lent):
    min = i
    for j in range(i+1, lent):
        if arr[min] > arr[j]:
            min = j
    if min != i:
        temp = arr[i]
        arr[i] = arr[min]
        arr[min] = temp

print("array after sort:  ", arr)
