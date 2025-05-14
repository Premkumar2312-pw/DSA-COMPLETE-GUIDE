def removeDuplicates(arr):
    return list(set(arr))

n = int(input("Enter the number of elements: "))
arr = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]

arr = removeDuplicates(arr)
print("Array after removing duplicates:", arr)
