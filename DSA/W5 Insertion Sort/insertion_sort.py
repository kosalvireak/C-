arr = [23, 1, 10, 5, 2]
len = len(arr)
print("array before sort: ", arr)
for i in range(len):
    key = arr[i]
    j = i - 1
    while(j >= 0 and arr[j] > key):
        arr[j + 1] = arr[j]
        j = j - 1
    arr[j+1] = key

print("array after sort: ", arr)
