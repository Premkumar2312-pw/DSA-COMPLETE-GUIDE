def findMaxMin(arr):
    max_val = min_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
        if num < min_val:
            min_val = num
    print(f"Max: {max_val}, Min: {min_val}")

n = int(input("Enter the number of elements: "))
arr = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]

findMaxMin(arr)
