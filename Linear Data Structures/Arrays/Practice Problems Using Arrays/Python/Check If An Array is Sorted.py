def isSorted(arr):
    for i in range(1, len(arr)):
        if arr[i] < arr[i-1]:
            return False
    return True

n = int(input("Enter the number of elements: "))
arr = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]

if isSorted(arr):
    print("The array is sorted.")
else:
    print("The array is not sorted.")
